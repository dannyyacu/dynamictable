#include "DynamicTable.h"

void DynamicTable::insert(int value, bool dummy_version) {
    if(last == size && dummy_version == true)
        resize_dummy();

    if(last == size && dummy_version == false)
        resize();

    table[last] = value;
    last++;
}

void DynamicTable::resize_dummy() {

    //resize the table when necessary adding one empty spot
    int* resizedTable = new int [size + 1];

    for(int i = 0; i < size; i++)
        resizedTable[i] = table[i];
    

    delete [] table;
    table = resizedTable;
    size += 1;
    
}


void DynamicTable::resize() {
    
    //resize the table when necessary doubling its size
    int* resizedTable = new int [size * 2];

    for(int i = 0; i < size; i++)
        resizedTable[i] = table[i];
    
    delete [] table;
    table = resizedTable;
    size *= 2;

}