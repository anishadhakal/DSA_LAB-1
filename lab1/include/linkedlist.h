#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>


class Node
{
    public:
       int info;
       Node *next;

      Node() : next(nullptr) {}
      Node(int info,Node *next) : info(info) , next(next) {}

};

class LinkedList
{
    private:
      Node *HEAD;
      Node *TAIL;

    public:
        LinkedList();
        bool isEmpty();
        void addToHead(int element);
        void addToTail(int data);
        void add(int data, Node  *predecessor);
        void traverse(char separator);
        int removeFromHead();
        int removeFromTail();
        void remove(int data);
        bool retrieve(int data, Node *&outputptr);
        bool search(int data);
      
};

#endif