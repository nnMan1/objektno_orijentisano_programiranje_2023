#ifndef REDTIJELA_H
#define REDTIJELA_H
#include "Tijelo.h"

#include <exception>
using namespace std;

class RedTijelaEx: public exception {
    char* msg;
public:
    RedTijelaEx(char* msg) {
        this->msg = strdup(msg);
    }

    virtual char* what() const noexcept {
        return msg;
    }
};

class RedTijelaUnderflow: public RedTijelaEx {
    char* msg;
    public:
        RedTijelaUnderflow():RedTijelaEx("Indeks manji od 0") {
        }

};

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
