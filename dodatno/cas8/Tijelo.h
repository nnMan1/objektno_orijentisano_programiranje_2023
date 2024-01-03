#ifndef TIJELO_H
#define TIJELO_H

#include "math.h"
#include <string.h>
#include <iostream>

using namespace std;

class Tijelo
{
    protected:
        char* id;

    public:
        Tijelo(char* id);
        virtual ~Tijelo();

        virtual char vrsta() const = 0;
        virtual double zapremina() const = 0;
        virtual Tijelo* kopija() const = 0;
        virtual void pisi(ostream&) const = 0;

        friend ostream& operator<<(ostream&, Tijelo&);

    protected:

    private:
};

#endif // TIJELO_H
