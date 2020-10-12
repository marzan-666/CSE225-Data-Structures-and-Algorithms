#ifndef HEAPTYPE_H
#define HEAPTYPE_H

template<class ItemType>
struct HeapType{

    void ReheapDown(int root, int bottom);
    void ReheapUp(int root, int bottom);
    ItemType* elements;
    int numElements;

};

#endif // HEAPTYPE_H
