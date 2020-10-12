#include "stacktype.h"
#include <iostream>
using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
    topPtr = NULL;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr == NULL);
}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        cout<<"The stack is Empty"<<endl;
    else
        return topPtr->info;
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc &exception)
    {
        return true;
    }
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if (IsFull())
        cout<<"The stack is full"<<endl;
    else
    {
        NodeType* location;
        location = new NodeType;
        location->info = newItem;
        location->next = topPtr;
        topPtr = location;
    }
}

template <class ItemType>
void StackType<ItemType>::Pop()
{
    if(IsEmpty())
        cout<<"The stack is Empty"<<endl;
    else
    {
        NodeType* tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class ItemType>
StackType<ItemType>::~StackType()
{
    NodeType* tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class ItemType>
void StackType<ItemType>::DisplayItems()
{
    NodeType* tempPtr = topPtr;
    if(tempPtr == NULL)
    {
        cout<<"The list is empty"<<endl;
        return;
    }
    while(tempPtr != NULL)
    {
        cout<<tempPtr->info<< " ";
        tempPtr = tempPtr->next;
    }
    cout<<endl;
}

template <class ItemType>
void StackType<ItemType>::ReplaceItem(int oldItem, int newItem)
{
    NodeType* tempPtr = topPtr;
    while(tempPtr != NULL)
    {
        if(tempPtr->info == oldItem)
            tempPtr->info = newItem;
        tempPtr = tempPtr->next;
    }
}
