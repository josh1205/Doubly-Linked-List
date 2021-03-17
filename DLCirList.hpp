//
//  DLCirList.hpp
//  DLCirList
//
//  Created by Joshua Lavieri on 10/31/20.
//  Copyright © 2020 Joshua Lavieri. All rights reserved.
//

#ifndef DLCirList_hpp
#define DLCirList_hpp

typedef int List_type;

class node
{
public:
    List_type value;
    node *next, *prev;
};

class DCL
{
public:
    DCL();
    ~DCL();
    DCL(const DCL & org); //has to be declared then to use
    void insert_back(const List_type & item);
    void insert_front(const List_type & item);
    void dequeue();
    void remove(const List_type & key);
    node * search(const List_type & key);
    void display();
    const DCL & operator=(const DCL & rightHandSide);  //do tomorrow or if you have time tonight
    bool isEmpty() const;
private:
    node *front;
    
};


#include <stdio.h>

#endif /* DLCirList_hpp */
