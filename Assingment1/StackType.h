#include<iostream>
using namespace std;
const int MAX_SIZE = 100;

class FullStack{};

class EmptyStack{};

template<class ItemType>
class StackType{
    public:
        StackType();
        void MakeEmpty();
        bool isEmpty();
        bool isFull();
        void Push(ItemType);
        void Pop();
        ItemType Top();
        void PrintStack();
    private:
        int top;
        ItemType items[MAX_SIZE];

};
