#include <iostream>
#include "linkedlist.h"


LinkedList :: LinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr; 

}


bool LinkedList :: isEmpty()
{
    if ( HEAD == nullptr && TAIL == nullptr)
       return true;
    else
       return false;
}

void LinkedList::addToHead(int element)
{
    Node *newNode = new Node(element, HEAD);

    HEAD = newNode;
    if (TAIL == nullptr)
    {
        TAIL=HEAD;
    }
}

void LinkedList::addToTail(int data)
{
    Node *newNode = new Node(data, NULL);
    if(HEAD == NULL)
    {
        HEAD = TAIL = newNode;
        
    }
    else
    { 
      
      TAIL->next = newNode;
      TAIL = TAIL->next;
      
    }

}

void LinkedList::add(int data, Node *predecessor)
{
    Node *newNode = new Node(data, predecessor->next);
    predecessor -> next = newNode;
}

void LinkedList::traverse(char separator)
{
   if (isEmpty())
    {
        std::cout << "List is empty!!\n";
    }
    else
    {
        Node *temp = HEAD;

        while (temp != nullptr)
        {
            std::cout << temp->info << separator;
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}


int LinkedList::removeFromHead()
{
     if (!this->isEmpty())
    {
        Node *nodeToDelete = HEAD;
        int data = nodeToDelete->info;
        this->HEAD = nodeToDelete->next;

        if (HEAD == nullptr)
        {
            TAIL = nullptr;
        }

        delete nodeToDelete;
        return data ;
    }  
    else 
    {
        std::cout << "The list is empty." << std::endl;
    }
}
int LinkedList::removeFromTail()
{
     if (!this->isEmpty())
    {
        Node *nodeToDelete = TAIL;
        int data = nodeToDelete->info;
        

           if( HEAD == TAIL)
             {
                 HEAD=TAIL=NULL;
              }
            else{
                Node *pred = HEAD;
                while(pred->next !=TAIL)
                {
                    pred = pred->next;
                }
              TAIL = pred;
              pred->next = NULL ;
            }
        delete nodeToDelete;
        return data;
    }  

        
    else 
    {
        std::cout << "The list is empty." << std::endl;
    }
}

void LinkedList::remove(int data)
{
 if(!isEmpty())
 {
    Node *temp = this->HEAD;
    Node *prev = NULL;

    if(temp->info == data)
    {
        delete temp;
    }
    else
    {
        while(temp->info != data)
        {
           prev = temp ;
           temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;

    }
 }
 else{ 
      std::cout << "List is empty:" << std::endl;
 }
}

bool LinkedList::retrieve(int data, Node *& outputptr)
{
    Node *point = HEAD;
        while(point!=nullptr && point->info!=data)
         {
             point=point->next;
         }
        if(point==nullptr)
        {
            outputptr = point;
            return 0;
        }
        else
        {
          outputptr=point;
          return true;
        }
}

bool LinkedList::search(int data)
{
    Node *temp = HEAD;
    while(temp!=nullptr)
    {
        if(temp->info==data)
        {
            return true;
        }
        temp = temp->next;
    }

}