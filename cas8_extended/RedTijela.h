#ifndef REDTIJELA_H
#define REDTIJELA_H
#include "Tijelo.h"

class RedTijela
{
    Tijelo** data;
    int pop;
    int cap;

    public:
        RedTijela(int cap=5);
        RedTijela(const RedTijela&);
        virtual ~RedTijela();
        bool empty() const;
        RedTijela& operator+=(Tijelo&);
        Tijelo* top();
        RedTijela& operator--();
        RedTijela operator--(int);
        Tijelo* operator[](int);
        friend ostream& operator<<(ostream&, RedTijela);

    protected:

    private:
};

#endif // REDTIJELA_H
