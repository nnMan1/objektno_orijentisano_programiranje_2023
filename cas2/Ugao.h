#ifndef UGAO_
#define UGAO_
#include <math.h>
#include <iostream>

using namespace std;

class Ugao {
    double vrijednost;

public:
    void set_rad(double v);
    double get_rad();
    void set_deg(int step, int m = 0, int s = 0);
    int get_ste();
    int get_min() ;
    int get_sec();
    Ugao zbir(Ugao u2);
    Ugao dodaj(Ugao);
};


#endif // UGAO_
