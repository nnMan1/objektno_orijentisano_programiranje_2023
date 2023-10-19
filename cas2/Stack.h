#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;

class Stack
{
    int cap;
    int top_id;
    int *data;

    public:
        Stack();
        virtual ~Stack();
        void push(int);
        int pop();
        int top();
        bool empty();

    protected:

    private:
};

#endif // STACK_H
