#include "Valuta.h"

Valuta::Valuta(char * naziv, double iznos)
{
    for(int i=0;i<Valuta::valutes_list.size();i++)
        if(strcmp(Valuta::valutes_list[i]->naziv, naziv) == 0)
            throw "Valuta vec postoji";

    this->naziv = strdup(naziv);
    this->iznos = iznos;

    Valuta::valutes_list.push_back(this);
}

Valuta::~Valuta()
{
    //dtor
}

vector<Valuta*> Valuta::valutes_list = vector<Valuta*>();
