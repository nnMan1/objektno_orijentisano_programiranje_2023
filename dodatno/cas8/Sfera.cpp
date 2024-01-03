#include "Sfera.h"

Sfera::Sfera(double r):Tijelo(sled_id)
{
    this->r = r;
    sprintf(sled_id,"S%d", ++counter);
}

Sfera::~Sfera()
{
    //dtor
}

char Sfera::vrsta() const {
    return 'S';
}

double Sfera::zapremina() const {
    return 4/3*r*r*r*M_PI;
}

Tijelo* Sfera::kopija() const {
    return new Sfera(r);
}

 void Sfera::pisi(ostream& os) const {
    cout << id << "(" << r << ")";
 }

 ostream& operator<<(ostream& os, Sfera& s) {
    os << s.id << "(" << s.r << ")";
    return os;
 }


int Sfera::counter = 0;
char Sfera::sled_id[50] = "S0";
