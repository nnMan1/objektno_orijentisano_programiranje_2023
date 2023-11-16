#ifndef VALJAK_H
#define VALJAK_H

#include "Tijelo.h"


class Valjak: public Tijelo
{
    static int num;
    static char next_name[50];

    double r, h;
    public:

        Valjak(double r, double h);
        virtual ~Valjak();

        double zapremina() const;
        char vrsta() const;
        Tijelo* kopija() const;
        void pisi() const;

    protected:

    private:
};

#endif // VALJAK_H
