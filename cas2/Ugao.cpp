#include "Ugao.h"

  void Ugao::set_rad(double vrijednost){
        if(vrijednost >=0 && vrijednost <= 2*M_PI)
            this->vrijednost = vrijednost;
        else {
            cout << "Vrijednost nije u dobrom opsegu" << endl;
            exit(1);
        }
}

double Ugao::get_rad() {
    return vrijednost;
}

void Ugao::set_deg(int step, int m, int s){
    this->vrijednost = step / 180.0 * M_PI;
    this->vrijednost += m / 60.0 / 180 * M_PI;
    (*this).vrijednost += s / 3600.0 / 180 * M_PI;
}

int Ugao::get_ste(){
        double step = vrijednost * 180 / M_PI;
        return floor(step);
}

int Ugao::get_min(){
        double m = vrijednost * 180 / M_PI * 60;
        return int(floor(m)) % 60;
}

Ugao Ugao::zbir(Ugao u2)  {
        Ugao ret;
        ret.vrijednost = u2.vrijednost + vrijednost;
        return ret;
    }

Ugao Ugao::dodaj(Ugao u2) {
    vrijednost += u2.vrijednost;
    return *this;
}
