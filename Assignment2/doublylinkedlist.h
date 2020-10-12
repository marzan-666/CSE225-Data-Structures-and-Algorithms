#ifndef LINKED_LIST_INCLUDED
#define LINKED_LIST_INCLUDED

class DoublyLinkedList
{
    struct Node
    {
        int data;
        Node *next;
    };
public:
    DoublyLinkedList();
    void MakeEmpty();
    bool isEmpty();
    bool isFull();
    int lengthIs();
    void InsertItemAtFront(int);
    void InsertItemAtRear(int);
    void InsertItem(int, int);
    bool RetrieveItem(int);
    void Print();
    void PrintReverse();
    void DeleteFirstNode();
    void DeleteLastNode();
    void DeleteItem(int);
private:
    int length;
    Node *head;
};

#endif //LINKED_LIST_INCLUDED
