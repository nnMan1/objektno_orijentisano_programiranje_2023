#include "Datum.h"

Datum::Datum():d(1), m(1), g(1)
{
}

Datum::Datum(int d, int m, int g):d(d), m(m), g(g)
{
}

void Datum::pisi() const {
    cout << d << "." << m << "." << g << ".";
}

Datum::~Datum()
{
    //dtor
}

bool Datum::validan(int d, int m, int g) {

    bool p = g % 400 == 0 || g % 100 != 0 && g % 4 == 0;

    if(m < 1 || m > 12) return false;
    if(d < 1 || d > Datum::dani_u_mjesecu[p][m-1]) return false;

    return true;
}

bool Datum::prestupna() const {
    return g % 400 == 0 || g % 100 != 0 && g % 4 == 0;
}

Datum Datum::sljedeci() const {
    Datum r = *this;

    r.d++;

    if(r.d > dani_u_mjesecu[r.prestupna()][m]) {
        r.d = 1;
        r.m++;
    }

    if(r.m > 12) {
        r.m = 1;
        r.g++;
    }

    return r;
}

Datum Datum::prethodni() const {
    Datum r = *this;

    r.d--;

    if(r.d == 0) {
        r.m = (m == 1 ? 12 : m-1);

        r.d = dani_u_mjesecu[r.prestupna()][r.m-1];
    }

    return r;
}

int Datum::broj_dana_od_pocetka_godine() const {
    int r = d;
    for(int i=0;i<m-1;i++)
        r += dani_u_mjesecu[prestupna()][i];

    return r;
}

int Datum::broj_dana_od_1_1_1() const {

    int r = broj_dana_od_pocetka_godine();

    r += (g - 1) * 365;
    r += (g - 1) / 4;
    r -= (g - 1) / 100;
    r += (g - 1) / 400;

    return r;

}

int Datum::razlika(const Datum& d1) const {
    return broj_dana_od_1_1_1() - d1.broj_dana_od_1_1_1();
}

int Datum::get_dan_u_nedelji() const {
    return razlika(Datum(1,1,1)) % 7 + 1;
}

int Datum::dani_u_mjesecu[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                                    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
