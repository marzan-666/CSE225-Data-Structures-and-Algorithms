#include "stacktype.h"
#include "stacktype.cpp"
#include <iostream>

using namespace std;

int main()
{
    StackType<int> s;

    if (s.IsEmpty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;

    /*int i, n;

    for(i=0; i<4; i++)
    {
        cin>>n;
        s.Push(n);
    }*/
    s.Push(5);
    s.Push(7);
    s.Push(4);
    s.Push(2);

    if (s.IsEmpty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;

    if (s.IsFull())
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack is not full"<<endl;

    s.DisplayItems();

    //cin>>n;
    s.Push(3);

    s.DisplayItems();

    if (s.IsFull())
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack is not full"<<endl;

    s.Pop();
    s.Pop();

    cout<<s.Top()<<endl;

    s.ReplaceItem(7, 8);
    s.DisplayItems();

    return 0;
}
