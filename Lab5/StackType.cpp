#include "stacktype.h"
#include <iostream>

using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
    top= -1;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top == -1);
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top == MAX_ITEMS-1);
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if (IsFull()) throw FullStack();
    top++;
    items[top] = newItem;
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if( IsEmpty() ) throw EmptyStack();
    top--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty()) throw EmptyStack();
    return items[top];
}
template <class ItemType>
void StackType<ItemType>::displayItems()
{
    int i;
    for(i=(top); i>=0; i--)
        cout<<items[i]<<" ";
    cout<<endl;
}
template <class ItemType>
int StackType<ItemType>::sumOdd(StackType s)
{
    int sum=0;
    for(int i=0; i<5; i++)
    {
        if (items[i]%2!=0)
            sum = sum + items[i];
    }
    return sum;
}
