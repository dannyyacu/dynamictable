
#ifndef UNTITLED_DYNAMICTABLE_H
#define UNTITLED_DYNAMICTABLE_H

#include <stdlib.h>

//mine
#include <iostream>
using namespace std;


//done

class DynamicTable {


public:
    DynamicTable(){
        last = 0;
        size = 1;
        table = new int [size];

    }

    ~DynamicTable(){
        delete [] table;
    }

    void insert(int value, bool dummy_version); //TODO: implement the insert function


private:

    void resize_dummy(); //TODO: implement an inefficient resize function that will expand the array adding only 1 empty spot every time the array is full.
    void resize(); //TODO: implement a resize function that doubles the size of the array every time it is full.

    int* table; //array containing the"list" of elements
    int size; //the size of the array
    int last; //the position of the last element

};


#endif //UNTITLED_DYNAMICTABLE_H
