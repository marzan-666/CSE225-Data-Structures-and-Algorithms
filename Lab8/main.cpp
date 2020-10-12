#include "stacktype.cpp"
#include <iostream>

using namespace std;

int main()
{

    StackType<int> s;
    StackType<int> t;

    if(s.IsEmpty())
        cout<<"Stack is Empty."<<endl;
    else
        cout<<"Stack is not Empty."<<endl;

    s.Push(5);
    s.Push(7);
    s.Push(4);
    s.Push(2);

     cout<<"After pushing four items: ";
     if(s.IsEmpty())
        cout<<"Stack is Empty."<<endl;
     else
        cout<<"Stack is not Empty."<<endl;

     if(s.IsFull())
        cout<<"Stack is Full."<<endl;
     else
        cout<<"Stack is not Full."<<endl;

    cout<<"Printed stack items:"<<endl;
    while(!s.IsEmpty()){
        int x=s.Top();
        cout<<x<<" ";
        t.Push(x);
        s.Pop();
    }
    cout<<endl;
    while(!t.IsEmpty()){
        int x=t.Top();
        s.Push(x);
        t.Pop();
    }
    s.Push(3);
    while(!s.IsEmpty()){
        int y=s.Top();
        cout<<y<<" ";
        t.Push(y);
        s.Pop();
    }
    cout<<endl;
    while(!t.IsEmpty()){
        int x=t.Top();
        s.Push(x);
        t.Pop();
    }
    if(s.IsFull())
        cout<<"Stack is Full."<<endl;
    else
        cout<<"Stack is not Full."<<endl;

    s.Pop();
    s.Pop();
    cout<<"Top item is : ";
    int x=s.Top();
    cout<<x<<endl;
    /*if (s.IsFull()==true)
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack is not full"<<endl;

    cout<<s.sumOdd(s)<<endl;

    s.Pop();
    s.Pop();

    cout<<s.Top()<<endl;*/
    return 0;
}





