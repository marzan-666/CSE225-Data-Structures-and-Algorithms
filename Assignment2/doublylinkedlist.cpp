#include"DoublyLinkedList.h"
#include<iostream>

using namespace std;


DoublyLinkedList::DoublyLinkedList()
{
    length = 0;
    head = NULL;
}

bool DoublyLinkedList::isEmpty() {
    if (head == NULL)
        return true;

    return false;
}

void DoublyLinkedList::MakeEmpty() {
    Node* temp;
    while (head!= NULL) {
        temp = head;
        head = head -> next;
        delete temp;
    }

    length = 0;
    //next= NULL;
}
bool DoublyLinkedList::isFull()
{
    Node* location;
    try
    {
        location = new Node;
        delete location;
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
}
int DoublyLinkedList::lengthIs()
{
    return length;
}
void DoublyLinkedList::InsertItemAtFront(int value)
{
    if(head == NULL)
    {
        head = new Node();
        head->data = value;
        head->next = NULL;
    }
    else
    {
        Node *temp = new Node();
        temp->data = value;
        temp->next = head;
        head = temp;
    }
    length++;
}

void DoublyLinkedList::InsertItemAtRear(int value)
{
    if(head == NULL)
    {
        head = new Node();
        head->data = value;
        head->next = NULL;
    }
    if (length == 1)
    {
        Node *temp = new Node();
        temp->data = value;
        temp->next = head;
        head = temp;
    }
    else
    {
        Node *temp = head;

        while(temp->next != NULL)
            temp = temp->next;

        Node *temp2 = new Node();
        temp2->data =value;
        temp2->next = NULL;

        temp->next = temp2;
    }
    length++;
}

void DoublyLinkedList::InsertItem(int value, int position)
{
    if(head == NULL)
    {
        head = new Node();
        head->data = value;
        head->next = NULL;
    }
    if (position == 1)
    {
        Node *temp = new Node();
        temp->data = value;
        temp->next = head;
        head = temp;
    }
    else
    {
        Node *temp = head;

        for(int i=0; i<position-2; i++)
            temp = temp->next;

        Node *temp2 = new Node();
        temp2->data = value;
        temp2->next = NULL;

        temp2->next = temp->next;
        temp->next = temp2;
    }
    length++;
}

bool DoublyLinkedList::RetrieveItem(int value)
{
    if(head == NULL)
        return false;

    Node *temp = head;
    bool flag = false;

    while(temp!= NULL)
    {
        if(temp->data == value)
        {
            flag = true;
            break;
        }
        temp = temp->next;
    }
    return flag;
}

void DoublyLinkedList::DeleteFirstNode()
{
    if (head == NULL)
        return;
    if (length == 1)
    {
        Node *temp = head;
        head = NULL;
        delete temp;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    length--;
}

void DoublyLinkedList::DeleteLastNode()
{
    if (head == NULL)
        return;
    if (length == 1)
    {
        Node *temp = head;
        head = NULL;
        delete temp;
    }
    else
    {
        Node *temp = head;
        Node *temp2 = new Node();
        while(temp->next!= NULL)
        {
            temp2=temp;
            temp = temp->next;
        }
        temp2->next = NULL;
        delete temp;
    }
    length--;
}

void DoublyLinkedList::DeleteItem(int position)
{
    if (head == NULL)
        return;
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *temp = head;
        for(int i=0; i<position-2; i++)
            temp = temp->next;
        Node *temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
    }
    length--;
}
void DoublyLinkedList::Print()
{
    if(length == 0)
    {
        cout << "The List is Empty " << endl;
        return;
    }

    cout <<"The items in the List are : ";

    Node *temp = head;

    while(temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}

void DoublyLinkedList::PrintReverse()
{
    Node *temp = head;

    if(temp == NULL)
    {
        cout<<"The list is empty"<<endl;
        return;
    }

    int a[length],b[length], i, j;

    for(i=0; temp!= NULL; i++)
    {
        a[i] = temp->data;
        temp = temp->next;
    }

cout <<"The items in the List are in Reversed order : ";

    for(i=length-1,j=0; i>=0 && j<=length-1; i--,j++)
    {
        b[j]=a[i];
        cout<<b[j]<< " ";
    }
}

