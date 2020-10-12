#include "src\SortedType.cpp"
#include <iostream>

using namespace std;

int main()
{
    SortedType<int> s;
    int n;

    s.InsertItem(1);
    s.InsertItem(3);
    s.InsertItem(5);
    s.InsertItem(7);


     cout<<"The length of the list "<<s.LengthIs()<<endl;

     s.ResetList();
     for(int i=0; i< s.LengthIs(); i++)
     {
         s.GetNextItem(n);
         cout<< n <<endl;
     }


     s.InsertItem (2);

        bool found;
         n=6;

     s.RetrieveItem(n,found);
     if(found == true)
         cout<<"item is found"<<endl;
     else
         cout<<"item is not found"<<endl;
         n=5;

     s.RetrieveItem(n,found);
     if(found == true)
         cout<<"item is found"<<endl;
     else
         cout<<"item is not found"<<endl;

     s.DeleteItem(1);
     n=1;

     s.RetrieveItem(n,found);
     if(found == true)
         cout<<"item is found"<<endl;
     else
         cout<<"item is not found"<<endl;
         s.ResetList();
     for(int i=0; i< s.LengthIs(); i++)
     {
         s.GetNextItem(n);
         cout<< n <<endl;
     }

     if(s.IsFull())
        cout<<"List is full"<<endl;
     else
        cout<<"List is not full"<<endl;




    return 0;
}
