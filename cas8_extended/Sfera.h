#ifndef SFERA_H
#define SFERA_H

#include "Tijelo.h"

class Sfera : public Tijelo
{
    static int counter;
    static char sled_id[50];

    double r;
    public:
        Sfera(double);
        virtual ~Sfera();

        char vrsta() const;
        double zapremina() const;
        Tijelo* kopija() const;
        void pisi(ostream&) const;

        friend ostream& operator<<(ostream&, Sfera&);

    protected:

    private:
};

#endif // SFERA_H
