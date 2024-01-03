#include "RedTijela.h"

RedTijela::RedTijela(int cap)
{
    this->data = new Tijelo*[cap];
    this->cap = cap;
    this->pop = 0;
}

RedTijela::RedTijela(const RedTijela& r) {
    this->cap = r.cap;
    this->pop = r.pop;
    this->data = new Tijelo*[cap];

    for(int i=0;i<pop;i++)
        data[i] = r.data[i];
}

RedTijela::~RedTijela()
{
    delete[] data;
}

RedTijela& RedTijela::operator+=(Tijelo& t) {
    if(pop == cap) {
        throw "Red je pun";
    }

    data[pop++] = &t;
    return *this;
}

Tijelo* RedTijela::operator[](int idx) {
    if(idx >= 0 && idx<pop)
        return data[idx];

    /*if(idx < 0)
        throw RedTijelaUnderflow();*/

    RedTijelaEx ex("Indeks izvan opsega");
    RedTijelaEx *ex_ptr = new RedTijelaEx("Indeks izvan opsega");
    throw ex_ptr;
}

ostream& operator<<(ostream& os, RedTijela r) {
    os << "r[";

    for(int i=0;i<r.pop - 1;i++)
        os << *(r.data[i]) << ", ";

    if(r.pop != 0)
        os << *(r.data[r.pop - 1]) << "]";
    else
        os<<"]";
}

RedTijela& RedTijela::operator--() {
    if(pop == 0)
            throw "Red je prazan";

    for(int i=1;i<pop;i++)
        data[i-1] = data[i];

    pop --;

    return *this;
}

RedTijela RedTijela::operator--(int) {
    if(pop == 0)
            throw "Red je prazan";

    RedTijela ret = *this;

    for(int i=1;i<pop;i++)
        data[i-1] = data[i];

    pop --;

    return ret;
}

Tijelo* RedTijela::top() {
    Tijelo* ret = (*this)[0];
    return ret;
}
