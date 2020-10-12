#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED


template <class ItemType>
class QueType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty();
    bool IsFull();
    int GetLength();
    void PrintList();

private:
    NodeType *front, *rear;
    int length;
};

#endif // QUETYPE_H_INCLUDED
