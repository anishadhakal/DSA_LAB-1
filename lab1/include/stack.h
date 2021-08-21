#include "linkedlist.h"

class Stack
{
public:
    virtual void isEmpty() = 0;
    virtual void push(int data) = 0;
    virtual int pop() = 0;
};

class LinkedListStack : public Stack
{
private:
    LinkedList list;
public:
    virtual void isEmpty()
    {
        list.isEmpty();
       
    }

    virtual void push(int data)
    {
        list.addToHead(data);
    }

    virtual int pop()
    {
        return list.removeFromHead();

    }



};