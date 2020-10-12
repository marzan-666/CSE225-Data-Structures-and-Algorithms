#include <iostream>

using namespace std;

int main()
{
    PQType<int> pq;

    if(pq.IsEmpty())
    {
        cout << "Queue is Empty" << endl;

    }else
    {
        cout << "Queue is Empty" << endl;
    }

    pq.Enqueue(4);
    pq.Enqueue(9);
    pq.Enqueue(2);
    pq.Enqueue(7);
    pq.Enqueue(3);
    pq.Enqueue(11);
    pq.Enqueue(17);
    pq.Enqueue(0);
    pq.Enqueue(5);
    pq.Enqueue(1);

    if(pq.IsEmpty())
    {
        cout << "Queue is Empty" << endl;

    }else
    {
        cout << "Queue is Empty" << endl;
    }

    return 0;
}
