#include <iostream>
#include "UnsortedType.cpp"
using namespace std;

int main()
{
    UnsortedType <int> list;
    if(list.lengthIs()==0){
        cout<<"List is Empty"<<endl;
    }
    list.insertedItem(23);
    list.insertedItem(-57);
    list.insertedItem(25);
    list.insertedItem(78);
    int var;

    for(int i=1;i<=list.lengthIs();i++){
        list.getNextItem(var);
        cout<<var<<endl;
    }
}
