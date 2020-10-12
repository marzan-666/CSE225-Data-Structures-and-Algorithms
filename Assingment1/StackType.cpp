#include "StackType.h"
#include<iostream>
using namespace std;

template<class ItemType>
StackType<ItemType>::StackType(){
    top = -1;
}

template<class ItemType>
void StackType<ItemType>::MakeEmpty(){
    top = -1;
}

template<class ItemType>
bool StackType<ItemType>::isEmpty(){
    //return(top== -1);
    if (top==-1)
        return true;
    return false;
}

template<class ItemType>
bool StackType<ItemType>:: isFull(){
    return(top == MAX_SIZE-1);
}

template<class ItemType>
void StackType<ItemType>::Push(ItemType newItem){
    if(isFull())
        throw FullStack();
    top++;
    items[top] = newItem;
}

template<class ItemType>
void StackType<ItemType>::Pop(){
    if(isEmpty())
        throw EmptyStack();
    top--;
}

template<class ItemType>
ItemType StackType<ItemType>::Top(){
    if (isEmpty())
        throw EmptyStack();
    return items[top];
}

template<class ItemType>
void StackType<ItemType>::PrintStack(){
    if(isEmpty())
        throw EmptyStack();
    for(int i= top; i>= 0; i--)
        cout <<items[i] <<" ";
}
