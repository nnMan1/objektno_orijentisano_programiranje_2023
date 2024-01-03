#include <iostream>
#include "HashTable.h"

using namespace std;

template<class T, int val=0>
T add(T x, T y) {
    return x + y + val;
}

template int add<int, 6>(int x, int t); //eksplicitno generisanje

int add(int x, int y) { //specijalizacija
    return x + y + 5;
}

template<class T>
class HashTable<T, 2> {
};

int main()
{
    HashTable<int, 2> h;
    h.print();
    return 0;
}
