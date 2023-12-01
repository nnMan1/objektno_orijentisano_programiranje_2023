#include "Valjak.h"

Valjak::Valjak(double r, double h):Tijelo(sled_id), r(r), h(h)
{
    sprintf(sled_id, "V%d", ++counter);
}

Valjak::~Valjak()
{
    //dtor
}

char Valjak::vrsta() const {
    return 'V';
}

double Valjak::zapremina() const {
    return r*r*M_PI*h;
}

Tijelo* Valjak::kopija() const {
    return new Valjak(r, h);
}

void Valjak::pisi(ostream& os) const {
    os << "V(" << r <<"," << h <<")";
}

int Valjak::counter = 0;
char Valjak::sled_id[50] = "V0";
