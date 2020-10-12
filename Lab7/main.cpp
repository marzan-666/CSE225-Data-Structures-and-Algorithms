#include "UnsortedType.cpp"
#include <iostream>

using namespace std;

int main()
{
    UnsortedType<int> u;
    int n;

    u.InsertItem(5);
    u.InsertItem(7);
    u.InsertItem(6);
    u.InsertItem(9);

    u.PrintList();

    cout<<"The length of the list "<<u.LengthIs()<<endl;

     u.InsertItem (1);
     u.PrintList();

     bool found;
     n=4;

     u.RetrieveItem(n,found);
     if(found == true)
         cout<<"item is found"<<endl;
     else
         cout<<"item is not found"<<endl;

     n=5;
     u.RetrieveItem(n,found);
     if(found == true)
         cout<<"item is found"<<endl;
     else
         cout<<"item is not found"<<endl;

     n=9;
     u.RetrieveItem(n,found);
     if(found == true)
         cout<<"item is found"<<endl;
     else
         cout<<"item is not found"<<endl;

     n=10;
     u.RetrieveItem(n,found);
     if(found == true)
         cout<<"item is found"<<endl;
     else
         cout<<"item is not found"<<endl;

     if(u.IsFull())
        cout<<"List is full"<<endl;
     else
        cout<<"List is not full"<<endl;

     u.DeleteItem(5);

     if(u.IsFull())
        cout<<"List is full"<<endl;
     else
        cout<<"List is not full"<<endl;

     u.DeleteItem(1);
     u.PrintList();

     u.DeleteItem(6);
     u.PrintList();
}
