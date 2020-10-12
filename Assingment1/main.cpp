/*
Sample Infix Expression: (4+8)*(6-5)/((3-2)*(2+2))
Sample Postfix Expression: 48+65-*32-22+*/

#include "StackType.cpp"
#include<string.h>
#include <iostream>

using namespace std;

int n(char c)
{
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '(' || c == ')')
        return 3;
}

int main()
{

// First Part of the Assignment: Infix to Postfix Conversion

    string infix;
    cout << "Enter a Correct Infix Expression: " << endl;
    cin >> infix;

    cout << endl;
    cout << "Converted Postfix Expression: " << endl;

    StackType<char> s;

    for(int i=0; i<infix.length(); i++)
    {
        if ((int)infix[i] < 40 || (int)infix[i] > 47) // Using ASCII values to determine operand
            cout << infix[i];
        else if (infix[i] == '(')
            s.Push(infix[i]);
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/')
        {
            while(!s.isEmpty() && n(s.Top()) <= n(infix[i]))
            {
                cout << s.Top();
                s.Pop();
            }
            s.Push(infix[i]);
        }
        else if(infix[i] == ')')
        {
            while (s.Top() != '(')
            {
                cout << s.Top();
                s.Pop();
            }
            s.Pop();
        }
    }

    while (!s.isEmpty())
    {
        cout << s.Top();
        s.Pop();
    }

    cout << endl;

// Second Part of the Assignment: Evaluation of a Postfix Expression

    string postfix;

    cout << "\nEnter a Correct Postfix Expression: " << endl;
    cin >> postfix;

    cout << endl;
    cout << "Evaluation of the Postfix Expression: " << endl;

    StackType<int> s2;

    for(int i = 0; i < postfix.length(); i++)
    {
        if ((int)postfix[i] < 40 || (int)postfix[i] > 47)
            s2.Push(postfix[i] - '0'); // Converting char to int
        else
        {
            int item2 = s2.Top();
            s2.Pop();
            int item1 = s2.Top();
            s2.Pop();

            if(postfix[i] == '+')
                s2.Push(item1+item2);
            else if(postfix[i] == '-')
                s2.Push(item1-item2);
            else if(postfix[i] == '*')
                s2.Push(item1*item2);
            else if(postfix[i] == '/')
                s2.Push(item1/item2);
        }
    }

    cout << s2.Top() << endl;

    return 0;
}
