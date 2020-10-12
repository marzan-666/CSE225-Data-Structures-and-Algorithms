#include "stacktype.h"
#include "stacktype.cpp"
#include <iostream>

using namespace std;

int main()
{
    StackType<int> s;

    if (s.IsEmpty()==true)
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;

    int i, n;
    s.Push(5);
    s.Push(7);
    s.Push(4);
    s.Push(2);

    /*for(i=0;i<4;i++)
    {
        cin>>n;
        s.Push(n);
    }*/

    if (s.IsEmpty()==true)
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;

    if (s.IsFull()==true)
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack is not full"<<endl;

    s.displayItems();

    cin>>n;
    s.Push(n);

    s.displayItems();

    if (s.IsFull()==true)
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack is not full"<<endl;

    cout<<s.sumOdd(s)<<endl;

    s.Pop();
    s.Pop();

    cout<<s.Top()<<endl;
}
