#ifndef PQTYPE_H
#define PQTYPE_H
#include "HeapType.h"
#include "HeapType.cpp"

template<class ItemType>
class PQType
{
    public:
        PQType(int);
        ~PQType();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        void Enqueue(ItemType);
        void Dequeue (ItemType&);
        void PrintQueue();

    protected:

    private:
        int length;
        HeapType<ItemType> items;
        int maxItems;
};

#endif // PQTYPE_H
