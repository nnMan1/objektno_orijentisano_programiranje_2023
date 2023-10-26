#ifndef DATUM_H
#define DATUM_H

#include <iostream>
using namespace std;


class Datum
{
    int d, m ,g;
    static int dani_u_mjesecu[2][12]; //inicijalizaciju cemo izvrsiti u Datum.cpp

    public:
        Datum();
        Datum(int, int , int);
        virtual ~Datum();
        void pisi() const;
        static bool validan(int, int, int);
        bool prestupna() const;
        int get_d() const {return d;}
        int get_m() const {return m;}
        int get_g() const {return g;}
        Datum sljedeci() const;
        Datum prethodni() const;
        int broj_dana_od_pocetka_godine() const;
        int razlika(const Datum&) const;
        int get_dan_u_nedelji() const;



    protected:
        int broj_dana_od_1_1_1() const;

    private:
};

#endif // DATUM_H
