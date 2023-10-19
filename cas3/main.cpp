#include <iostream>
#include "Skup.h"
using namespace std;

/*
* Napisati klasu za skup cijelih brojeva
* - Konstruktor bez argumenata koji kreira prazan skup !!!!!!!!objasniti podrazumijevani konstruktor!!!!!!!! +
* - Konstruktor kopije //inicijalizacija i dodjela +
* - Konstruktor sa jednim argumentom, kreira skup sa jednim arguemntom (moze se koristiti za implicitnu konverziju) !!!!!!!!!!prvo implementirati njega!!!!!!!!!!!! +
* - Destruktor. +
* - Unija dva skupa. (vraca novi skup) //skup se predaje po referenci +
* - Metoda dodaj(skup), ubacuje elemente skupa koji je predat u vec postojeci skup, i vraca referencu na skup nad kojim je pozvana metoda +
* - Razlika skupova. (vraca novi skup) +
* - Ukloni. (A.ukloni(B); uklanja elemente skupa B iz skupa A i vraca referencu na tako modifikovan skupa A) +
* - Presjek skupova +
* - ispis skupa na standardni izlaz +
* - Metoda size(), vraca kardinalnost skupa +
*/

int main()
{
    Skup s1;

    Skup s2(s1); //konstrutkor kopije
    Skup s3 = s1; //isto sto i prethodna linija

    Skup s4(3);
    Skup s5 = 5; //isto sto i prethodna linija

    cout << "s4 = "; s4.stampaj(); cout << endl;
    cout << "s5 = "; s5.stampaj(); cout << endl;

    Skup s6 = s4.unija(s5);

    cout << "s6 = "; s6.stampaj(); cout << endl;

    s6.dodaj(9);
    cout << "s6 = "; s6.stampaj(); cout << endl;

    Skup s7 = s6.razlika(5);
    cout << "s7 = "; s7.stampaj(); cout << endl;

    s6.dodaj(6);
    s6.ukloni(5).ukloni(3); //posto metoda uloni vraca referencu na s6(objekat nad kojim je pozvana), mozemo ponovo da pozovemo ukloni nad istim objetkom i uklonimo jos jednu vrijednost
    cout << "s6 = "; s6.stampaj(); cout << endl;

    s6.dodaj(5).dodaj(11); //posto metoda dodaj vraca referencu na s6(objekat nad kojim je pozvana), mozemo ponovo da pozovemo dodaj nad istim objetkom i uklonimo jos jednu vrijednost
    s7.dodaj(10);
    Skup s8 = s6.presjek(s7);
    cout << "s8 = "; s8.stampaj(); cout << endl;


    return 0;
}
