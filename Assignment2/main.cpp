
//Name : Md.Marjan
//ID: 1621396042
//Section: 01

#include"DoublyLinkedList.h"
#include <iostream>

using namespace std;

int main()
{
    DoublyLinkedList s;

    s.InsertItemAtFront(5);
    s.InsertItemAtFront(3);
    s.InsertItemAtFront(9);
    s.InsertItemAtFront(2);

    s.Print();

    cout<< "\nThe Length is = " << s.lengthIs() << endl;

    s.InsertItemAtRear(4);
    s.Print();

    cout<< "\nThe Length is = " << s.lengthIs() << endl;

    s.DeleteFirstNode();
    s.Print();

    s.DeleteLastNode();
    s.Print();

    s.DeleteItem(1);
    s.Print();

    int x = 5;

    if(s.RetrieveItem(5))
        cout <<"\n" << x << " is in the list" <<endl;
    else
        cout <<"\n" << x << " is NOT in the list" <<endl;
    int y = 3;

    if(s.RetrieveItem(y))
        cout <<"\n" << y << " is in the list" <<endl;
    else
        cout <<"\n" << y << " is NOT in the list" <<endl;
        cout<<endl;

    s.InsertItem(4,1);
    s.Print();

    s.PrintReverse();

    cout<<endl;

    s.MakeEmpty();
    s.Print();

    return 0;
}
