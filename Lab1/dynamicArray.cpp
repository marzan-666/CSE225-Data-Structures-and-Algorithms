#include "dynamicArray.h"

dynamicArray::dynamicArray(int size)
{
    data=new int[size];
}
void dynamicArray::insertItem(int index,int item){
data[index]=item;
}
int dynamicArray::getItem(int index){
return data[index];
}

dynamicArray::~dynamicArray()
{
   delete[] data;
}
