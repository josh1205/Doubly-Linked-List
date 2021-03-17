
#include <iostream>
#include "DLCirList.hpp"

using namespace std;

/*
 DCL();
 DCL(const DCL & org);
 ~DCL();
 void insert_back(const List_type & item);
 void insert_front(const List_type & item);
 void remove(const List_type & key);
 node * search(const List_type & key);
 isempty funciton
 */

bool DCL::isEmpty() const
{
    if(front == NULL)
    {
        return true;
    }
    return false;
}

DCL::DCL()
{
    front = NULL;
}

DCL::~DCL()
{
    cout << "destructor called" << endl;
    while(!isEmpty())
    {
        dequeue();
    }
}

void DCL::dequeue() //used in doubly linked queues
{
  if(!isEmpty())
  {
      node *p = front;
      if(p != front -> next)
      {
          front -> prev -> next = front -> next;
          front -> next -> prev = front -> prev;
          front = front -> next;
      }
      else
      {
          front = NULL;
      }
      
      delete p;
      
      
  }
  else
  {
      cout << "List is empty()" << endl;
  }
}

DCL::DCL(const DCL & org)
{
    
    front = NULL;
    node *p = org.front;
    while(p -> next != org.front)
    {
        insert_back(p -> value);
        p = p -> next;
    }
    insert_back(p -> value);
     
}

void DCL::insert_front(const List_type & item)
{
    if(isEmpty())
    {
        front = new node;
        front -> value = item;
        front -> next = front;
        front -> prev = front;
    }
    else
    {
        node *p = new node;
        p -> value = item;
        p -> next = front;
        p -> prev = front -> prev;
        front -> prev = p;
        front = p;
    }
}

void DCL::insert_back(const List_type & item)// enqueue
{
    if(isEmpty())
    {
        front = new node;
        front -> value = item;
        front -> next = front;
        front -> prev = front;
    }
    else
    {
        node *p = new node;
        p -> value = item;
        p -> prev = front -> prev;
        p -> next = front;
        front -> prev = p;
        p -> prev -> next = p;
    }
}

void DCL::display()
{
    node *p = front;
    if(!isEmpty())
    {
        while(p -> next != front)
        {
            cout << p -> value << endl;
            p = p -> next;
        }
        cout << p -> value << endl;
    }
    else
    {
        cout << "Empty" << endl;
    }
}

void DCL::remove(const List_type & key)
{
    node *p = search(key);
    //key was not found
    if(p == NULL)
    {
        cout << "Key was not found" << endl;
    }
    else
    {
        //Remove the front node, only node
        if(p == front && front -> next == front)
        {
            delete p;
            front = NULL;
        }
        //Remove the front node, there is more than one
        else if(p == front)
        {
            front -> prev -> next = front -> next;
            front -> next -> prev = front -> prev;
            front = front -> next;
            delete p;
        }
        else
        {
            //front does not contain the node and there is at least two nodes
            node *back_ptr = front;
            while(back_ptr -> next != p)
            {
                back_ptr = back_ptr -> next;
            }
            if(p == front -> prev)
            {
                front -> prev = back_ptr;
            }
            back_ptr -> next = p -> next;
            p -> next -> prev = back_ptr;
            
            delete p;
            
        }
        
    }
    //if key is in the last node
}
node * DCL::search(const List_type & key)
{
    node *p = front;
    while(p -> next != front)
    {
        if(p -> value == key)
        {
            return p;
        }
        p = p -> next;
    }
    return p;
}
    
/*
const DCL & DCL::operator=(const DCL & rightHandSide)
{
    
    if(this != &rightHandSide)
    {
        this -> ~DCL();
        if(rightHandSide.isEmpty())
        {
            front = NULL;
        }
        else
        {
            front = new node;
            node *p = front;
            node *rhsPtr = rightHandSide.front -> next;
            
            while(rhsPtr != NULL)
            {
                p -> next = new insert_back(p -> value);
                
            }
        }
        
    }
     
}
 */
