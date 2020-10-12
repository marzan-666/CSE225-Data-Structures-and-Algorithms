#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED

template<class ItemType>
class QueType
{
public:
    QueType();
    QueType(int max);
    ~QueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    void Display();
    void ReplaceItem(ItemType oldItem, ItemType newItem);
private:
    int front;
    int rear;
    ItemType* items;
    int maxQue;
};

#endif // QUETYPE_H_INCLUDED
