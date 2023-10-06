#include <iostream>
#include "Ugao.h"

using namespace std;

//Ugao (ugao u radijanima)
    //set step - uzima ugao u stepenima
    //set rad
    // get step
    //get rad
    // stampaj
    // dodaj
    // oduzmi

//Stek
    //dodavanje u stek
    //da li je stek prazan
    //uzimanje sa vrha steka
    //uklanjanje sa vrha steka

int main()
{
    Ugao u1;
    //u1.set_rad(10);
    //cout << u1.get_rad();

    u1.set_deg(60, 10, 0);
    cout << u1.get_ste() << u1.get_min() << endl;

    Ugao u2;
    u2.set_deg(30, 0, 0);

    Ugao u3;
    u3.set_deg(45);
    u3.dodaj(u1.dodaj(u2));
    cout << u3.get_ste();
    return 0;
}
