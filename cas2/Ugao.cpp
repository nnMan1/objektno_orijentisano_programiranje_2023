#include "Ugao.h"

void Ugao::set_rad(double vrijednost){
    this->vrijednost = vrijednost;
    normalize();
}

double Ugao::get_rad() {
    return vrijednost;
}

void Ugao::set_deg(int step, int m, int s){
    this->vrijednost = step / 180.0 * M_PI;
    this->vrijednost += m / 60.0 / 180 * M_PI;
    (*this).vrijednost += s / 3600.0 / 180 * M_PI;

    normalize();

}

int Ugao::get_ste(){
        double step = vrijednost * 180 / M_PI + 1e-7; //javlja se greska prilikom rada sa realnim brojevima, pa dodajemo 1e-7 da bi se kompenzovalo sa zaokruzivanjem
        return step;
}

int Ugao::get_min(){
        double m = vrijednost * 180 / M_PI * 60 + 1e-7; //javlja se greska prilikom rada sa realnim brojevima, pa dodajemo 1e-7 da bi se kompenzovalo sa zaokruzivanjem
        return int(floor(m)) % 60;
}

int Ugao::get_sec(){
        double m = vrijednost * 180 / M_PI * 3600 + 1e-7; //javlja se greska prilikom rada sa realnim brojevima, pa dodajemo 1e-7 da bi se kompenzovalo sa zaokruzivanjem
        return int(floor(m)) % 60;
}

Ugao Ugao::zbir(Ugao u2)  {
        Ugao ret;
        ret.vrijednost = u2.vrijednost + vrijednost;
        ret.normalize();
        return ret;
}

Ugao Ugao::dodaj(Ugao u2) {
    vrijednost += u2.vrijednost;
    normalize();
    return *this;
}

Ugao Ugao::oduzmi(Ugao u2)  {
    vrijednost -= u2.vrijednost;
    normalize();
    return *this;
}

void Ugao::stampaj() {
    cout << get_ste() <<" "<< get_min()<<"' "<< get_sec()<<"\"" << endl;
}

void Ugao::normalize() {
    while(vrijednost >= 2*M_PI)
            vrijednost -= 2*M_PI;

    while(vrijednost < 0)
        vrijednost += 2*M_PI;
}
