#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

template <class ItemType>
class DynamicArray
{
    private:
        ItemType*data;
    public:
        DynamicArray(int);
        ~DynamicArray();
        void insertedItem(int,ItemType);
        ItemType getItem(int);
};

#endif  // DYNAMICARRAY_H
