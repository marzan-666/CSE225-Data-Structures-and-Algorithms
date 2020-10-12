#include "DynamicArray.cpp"
#include <iostream>

using namespace std;

int main()
{
    int defaultSize=3;

    DynamicArray <int> intArray (defaultSize);

    for (int index=0,data=10;index<3;index++,data+=10){
        intArray.insertedItem(index,data);
    }

    int temp;
    cout<<"Integer values: ";
    for(int index=0;index<3;index++){
        temp=intArray.getItem(index);
        cout<<temp<<" " ;
    }
    cout<<endl;

    DynamicArray<char>charArray(defaultSize);

    for(int index=0,value='A';index<3;index++,value++){
        charArray.insertedItem(index,value);
    }

    char tempChar;

    cout<<"Character type values : ";

    for(int index=0;index<3;index++){
        tempChar = charArray.getItem(index);
        cout<<tempChar<<" ";
    }
    cout<<endl;

    return 0;
}
