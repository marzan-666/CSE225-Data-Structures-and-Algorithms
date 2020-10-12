#include "binarysearchtree.cpp"
#include <iostream>


using namespace std;

int main()
{
   TreeType<int> t;
   if(t.IsEmpty())
   {
       cout<<"Tree is empty"<<endl;
   }
   else
   {
       cout<<"Tree is not empty"<<endl;
   }
   t.InsertItem(4);
   t.InsertItem(9);
   t.InsertItem(2);
   t.InsertItem(7);
   t.InsertItem(3);
   t.InsertItem(11);
   t.InsertItem(17);
   t.InsertItem(0);
   t.InsertItem(5);
   t.InsertItem(1);
   if(t.IsEmpty())
   {
       cout<<"Tree is empty"<<endl;
   }
   else
   {
       cout<<"Tree is not empty"<<endl;
   }

   cout<<"The length of tree is: "<<t.LengthIs()<<endl;

   int index=9;
   bool found=false;
   t.RetrieveItem(index,found);
   if(found)
   {
       cout<<"Item is found"<<endl;
   }
   else
   {
       cout<<"Item is not found"<<endl;
   }

   int x=13;
   t.RetrieveItem(x,found);
   if(found)
   {
       cout<<"Item is found"<<endl;
   }
   else
    cout<<"Item not found"<<endl;

     t.ResetTree(IN_ORDER);
    int print;
    bool fin = false;
    while(!fin)
    {
       t.GetNextItem(print,IN_ORDER,fin);
       cout << print << " ";
    }

    cout << endl;

    fin = false;
    t.ResetTree(PRE_ORDER);
    while(!fin)
    {
       t.GetNextItem(print,PRE_ORDER,fin);
       cout << print << " ";
    }

    cout << endl;

    fin = false;

    t.ResetTree(POST_ORDER);
    while(!fin)
    {
       t.GetNextItem(print,POST_ORDER,fin);
       cout << print << " ";
    }

    cout << endl;

    t.MakeEmpty();

    t.InsertItem(8);
    t.InsertItem(3);
    t.InsertItem(10);
    t.InsertItem(1);
    t.InsertItem(6);
    t.InsertItem(4);
    t.InsertItem(7);
    t.InsertItem(14);
    t.InsertItem(13);



    return 0;
}

