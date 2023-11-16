#ifndef REDTIJELA_H
#define REDTIJELA_H

#include "Tijelo.h"

#include <iostream>
using namespace std;


class RedTijela
{
    Tijelo** arr;
    int pop;
    int cap;

    public:
        explicit RedTijela(int cap=5); //explicit onemogucava implicitnu konverziju
        virtual ~RedTijela();

        bool prazan() const;
        RedTijela& dodaj(Tijelo&);
        Tijelo& uzmi();                 //vraca tijelo sa pocetka reda
        Tijelo& ukloni();               //vraca tijelo sa pocetka reda i uklanja ga sa stacka
        void pisi() const;

    protected:

    private:
};

#endif // REDTIJELA_H
