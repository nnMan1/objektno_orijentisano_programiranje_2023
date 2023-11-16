#ifndef SFERA_H
#define SFERA_H

#include "Tijelo.h"

class Sfera : public Tijelo
{
    static int num;
    static char next_name[50];

    double r;
    public:
        Sfera(double r=5);
        virtual ~Sfera();

        double zapremina() const;
        char vrsta() const;
        Tijelo* kopija() const;
        void pisi() const;

    protected:

    private:
};

#endif // SFERA_H
