#include "QueType.cpp"
#include <iostream>

using namespace std;

int main()
{
    QueType<int> q;

    if (q.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    int i, n;

    for(i=0; i<4; i++)
    {
        cin>>n;
        q.Enqueue(n);
    }

    if (q.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    if (q.IsFull())
        cout<<"Queue is full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

    q.PrintList();

    cin>>n;
    q.Enqueue(n);

    q.PrintList();

    if (q.IsFull())
        cout<<"Queue is full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

    cin>>n;
    q.Enqueue(n);

    q.Dequeue(5);
    q.Dequeue(7);

    q.PrintList();

    q.Dequeue(2);
    q.Dequeue(6);
    q.Dequeue(8);

    if (q.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    q.Dequeue(2);

    return 0;
}
