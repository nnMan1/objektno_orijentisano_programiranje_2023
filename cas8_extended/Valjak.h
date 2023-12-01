#ifndef VALJAK_H
#define VALJAK_H

#include "Tijelo.h"


class Valjak : public Tijelo
{
    static int counter;
    static char sled_id[50];

    double r, h;

    public:
        Valjak(double, double);
        virtual ~Valjak();

        char vrsta() const;
        double zapremina() const;
        Tijelo* kopija() const;
        void pisi(ostream&) const;

    protected:

    private:
};

#endif // VALJAK_H
