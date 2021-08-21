#include "linkedlist.h"
#include "stack.h"
#include "queue.h"

int main(){
    LinkedList list;
    
    list.addToHead(5);
    std::cout << "Added to head:" << std::endl;
    list.traverse(' ');

    list.addToHead(6);
    std::cout << "Added to head:" << std::endl;
    list.traverse(' ');

    list.addToHead(7);
    std::cout << "Added to head:" << std::endl;
    list.traverse(' ');

    list.addToHead(8);
    std::cout << "Added to head:" << std::endl;
    list.traverse(' ');

    list.addToHead(9);
    std::cout << "Added to head:" << std::endl;
    list.traverse(' ');

    Node *predecessor= new Node();
    std::cout << "Element Added:" << std::endl;
     list.add(11,predecessor);
     list.traverse(' ');


    list.addToTail(2);
    std::cout << "Added to tail:" << std::endl;
    list.traverse(' ');

    list.addToTail(15);
    std::cout << "Added to tail:" << std::endl;
    list.traverse(' ');


    
    list.removeFromHead();
    std::cout << "Removed from head:" << std::endl;
    list.traverse(' ');

    list.removeFromTail();
    std::cout << "Removed from tail:" << std::endl;
    list.traverse(' ');

    list.remove(6);
    std::cout << "Removing an element:" << std::endl;
    list.traverse(' ');

   std::cout << "Searching an element:" << std::endl;
   std::cout << list.search(7) << std::endl;
    
    Node *outputptr;
    std::cout << "Retrieve result:" << std::endl;
    std::cout << list.retrieve(8,outputptr) << std::endl;
    

    LinkedListStack s;
    s.push(2);
    s.push(11);
    s.push(15);
    std::cout << "Stack list is given below:" << std::endl;
    std::cout << s.pop()  << std::endl;
    std::cout << s.pop()  << std::endl;
    std::cout << s.pop()  << std::endl;


    LinkedListQueue q;
    q.enqueue(3);
    q.enqueue(8);
    q.enqueue(12);
    
    std::cout << "Queue list is given below:" << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;


 }