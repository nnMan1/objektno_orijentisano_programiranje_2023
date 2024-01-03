#include "Tijelo.h"

Tijelo::Tijelo(char* id) {
    this->id = strdup(id);
}

Tijelo::~Tijelo(){
    cout << id << " destruktor onsnovne klase\n" ;
    delete[] id;
}
