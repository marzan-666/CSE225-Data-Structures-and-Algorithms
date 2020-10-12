#include "QueType.h"
#include "QueType.cpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,x;
    QueType<int> q(5), qTemp(5);

    for(int i=0; i<5; i++)
    {
        cin>>n;
        q.Enqueue(n);
        //q.Enqueue(rand()%10);
    }

    q.Dequeue(x);
    q.Display();

    q.Dequeue(x);
    q.Display();

    /*
    cout << endl;
    while(!q.IsEmpty())
    {
        q.Dequeue(x);
        cout << x <<" ";
        qTemp.Enqueue(x);
    }
    while(!qTemp.IsEmpty())
    {
        qTemp.Dequeue(x);
        q.Enqueue(x);
    }
    cout << endl;
    */

    q.ReplaceItem(5,6);
    q.Display();

    return 0;
}
