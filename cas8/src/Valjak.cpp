#include "Valjak.h"

Valjak::Valjak(double r, double h):Tijelo(next_name)
{
    this->r = r;
    this->h = h;
    sprintf(next_name, "V%d", ++num);
}

Valjak::~Valjak()
{
    cout << id << " destruktor izvedene klase\n" ;
}

double Valjak::zapremina() const {
    return r * r * h * M_PI;
}

char Valjak::vrsta() const {
    return 'V';
}

Tijelo* Valjak::kopija() const {
    return new Valjak(r, h);
}

void Valjak::pisi() const {
    cout<<this->id<<"("<<r<<", "<<h<<")";
}

int Valjak::num=0;
char Valjak::next_name[50] = "V0";

