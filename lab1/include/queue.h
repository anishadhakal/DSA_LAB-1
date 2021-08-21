
#include "linkedlist.h"

class Queue
{
virtual void isEmpty()= 0;
virtual void enqueue(int value)=0;
virtual int dequeue()=0;

};

class LinkedListQueue : public Queue
{
private:
   LinkedList list;

public:
    virtual void isEmpty()
    {
     list.isEmpty();
    }
    
    virtual void enqueue(int data)
    {
        list.addToTail(data);
    }

    virtual int dequeue()
    {
       return list.removeFromHead();
    }

  

}; 