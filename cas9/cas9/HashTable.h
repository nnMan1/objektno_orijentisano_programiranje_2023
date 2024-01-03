#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
using namespace std;

template<class T, int cap>
class HashTable
{
    public:
        HashTable();
        virtual ~HashTable();
        void print() {
            cout << "Test" << endl;
        }

    protected:

    private:
};

#include "HashTable.cpp"
#endif // HASHTABLE_H
