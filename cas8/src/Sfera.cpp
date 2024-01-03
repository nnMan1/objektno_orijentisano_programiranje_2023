#include "Sfera.h"

Sfera::Sfera(double r):Tijelo(next_name)
{
    this->r = r;
    sprintf(next_name, "S%d", ++num);
}

Sfera::~Sfera()
{
    cout << id << " destruktor izvedene klase\n" ;
}

double Sfera::zapremina() const {
    return 4 / 3 * r * r * r * M_PI;
}

char Sfera::vrsta() const {
    return 'S';
}

Tijelo* Sfera::kopija() const {
    return new Sfera(r);
}

void Sfera::pisi() const {
    cout<<this->id<<"("<<r<<")";
}

int Sfera::num=0;
char Sfera::next_name[50] = "S0";
