#include "QueType.h"
#include <iostream>

using namespace std;

template<class ItemType>
QueType<ItemType>::QueType(int max)
{
    maxQue = max + 1;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}
template<class ItemType>
QueType<ItemType>::QueType()
{
    maxQue = 501;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}
template<class ItemType>
QueType<ItemType>::~QueType()
{
    delete [] items;
}
template<class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    front = maxQue - 1;
    rear = maxQue - 1;
}
template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (rear == front);
}
template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    return ((rear + 1) % maxQue == front);
}
template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if (IsFull())
        cout << "Queue is full" << endl;
    else
    {
        rear = (rear + 1) % maxQue;
        items[rear] = newItem;
    }
}
template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if (IsEmpty())
        cout << "Queue is empty" << endl;
    else
    {
        front = (front + 1) % maxQue;
        item = items[front];
    }
}
template<class ItemType>
void QueType<ItemType>::Display()
{
    cout<<endl;
    for(int i=front; i<=rear; i++)
        cout<< items[i] <<" ";
    cout<<endl;
}
template <class ItemType>
void QueType<ItemType>::ReplaceItem(ItemType oldItem, ItemType newItem)
{
    for(int i=0; i<maxQue; i++)
    {
        if(items[i]==oldItem)
            items[i]=newItem;
    }
}
