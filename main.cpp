//
//  main.cpp
//  DLCirList
//
//  Created by Joshua Lavieri on 10/31/20.
//  Copyright © 2020 Joshua Lavieri. All rights reserved.
//

#include <iostream>
#include "DLCirList.hpp"

using namespace std;

int main()
{
    DCL list, mist;
    
    /*
    cout << "test 1" << endl;
    list.display();
    cout << "test 2" << endl;
    list.insert_front(1);
    list.display();
    cout << "test 3" << endl;
    list.insert_front(2);
    list.insert_front(3);
    list.insert_front(4);
    list.insert_front(5);
    list.display();
    
    cout << "test 4" << endl;
    DCL new_LIST = list;
    new_LIST.display();
     */
    
    cout << "test 1" << endl;
    list.display();
    cout << "test 2" << endl;
    list.insert_back(1);
    list.display();
    cout << "test 3" << endl;
    list.insert_back(2);
    list.insert_back(3);
    list.insert_back(4);
    list.insert_back(5);
    list.display();
    cout << "test 4 /mist/" << endl;
    mist.insert_back(3);
    mist.insert_back(4);
    mist.insert_back(5);
    mist.insert_back(6);
    mist.remove(5);
    
    mist.display();
    
    
    return 0;
}
