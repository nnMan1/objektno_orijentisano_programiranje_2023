#include "Stack.h"

Stack::Stack()
{
    this->cap = 10;
    this->top_id = 0;
    this->data = new int[10];
}

Stack::~Stack()
{
    delete[] this->data;
}

bool Stack::empty() {
    return top_id == 0;
}

int Stack::pop() {
    if(!this->empty())
        return this->data[--this->top_id];
    else
        cout << "Stack je vec prazan" <<endl;
    return 0;
}

int Stack::top() {
    if(!this->empty())
        return this->data[this->top_id-1];
    else
        cout << "Stack je prazan" <<endl;
    return 0;
}

void Stack::push(int value) {
    if(this->top_id == this->cap) {
        int * n_data = new int[this->cap * 2]; //kreiramo niz duplo vece vuzine

        for(int i=0;i<this->cap;i++)
            n_data[i] = data[i]; //kopiramo vrijednosti iz starog niza u novi niz

        delete[] this->data; //obrisemo stari niz
        this->data = n_data; //postavimo novi niz kao niz koji cuva podatke
        this->cap *= 2;

    }

     this->data[this->top_id++] = value;
}
