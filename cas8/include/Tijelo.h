#ifndef TIJELO_H
#define TIJELO_H

#include <iostream>
#include <string.h>
#include <math.h>

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
        virtual void pisi() const = 0;

    protected:

    private:
};

#endif // TIJELO_H
