#include "RedTijela.h"

RedTijela::RedTijela(int cap)
{
    this->arr = new Tijelo*[cap];
    this->pop = 0;
    this->cap = cap;
}

RedTijela::~RedTijela()
{
    delete[] arr;
}

bool RedTijela::prazan() const {
    return this->pop == 0;
}

RedTijela& RedTijela::dodaj(Tijelo& t) {
    if(this->pop == this->cap)
        exit(1);

    this->arr[pop++] = &t;

    return *this;
}

Tijelo& RedTijela::uzmi() {
    if(this->pop == 0)
        exit(1);

    return *(arr[0]);
}

Tijelo& RedTijela::ukloni() {
    if(this->pop == 0)
        exit(1);

    Tijelo* t = (arr[0]);
    t->pisi(); cout<<endl;
    for(int i=0;i<pop-1;i++)
        arr[i] = arr[i+1];

    pop--;

    return *t;
}

void RedTijela::pisi() const {
    cout<<"r[";

    for(int i=0;i<pop-1;i++) {
        arr[i]->pisi();
        cout<<", ";
    }

    if(pop != 0)
        arr[pop-1]->pisi();

    cout<<"]";
}
