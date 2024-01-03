#include "Tijelo.h"

Tijelo::Tijelo(char* id)
{
    this->id = strdup(id);
}

Tijelo::~Tijelo()
{
    delete[] this->id;
}

ostream& operator<<(ostream& os, Tijelo& t) {
    t.pisi(os);
    return os;
 }
