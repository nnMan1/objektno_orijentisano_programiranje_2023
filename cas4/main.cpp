#include <iostream>
#include "Datum.h"
#include "ListaDatuma.h"

using namespace std;

/**
* 1. Napisati klasu datum. (d, m,g)
* - Konstruktor bez argumenata, postavlja datum na 1.1.1. +
* - Konstruktor sa 3 argumenta +
* - bool prestupna() const; //provjerava da li je godina prestupna +
* - static bool validan(int d, int g, int m); //provjerava da li d, m, g predstavlja ispravan datum +
* - Getere +
* - int get_dan_u_nedelji() const; // 1 = ponedljeljak, 7 = nedelja +
* - void pisi() const; +
* - Datum sljedeci() const; +
* - Datum prethodni() const; +
* - int broj_dana_od_pocetka_godine() const; +
* - int razlika(const Datum&) const; +
*
* 2.Napisati klasu za ulancanu listu datuma
* -- potrebno je napraviti pomocnu klasu za cvor liste (Node). Cvor liste sadrzi datum i pokazivac na sljedeci cvor liste
* -- ulancana lista cuva pokazivac na pocetak liste
* - Konstruktor bez argumenata koji kreira praznu listu +
* - Destruktor +
* - Konstruktor kopije +
* - int duzina() const; +
* - ListaDatuma& dodaj_na_pocetak(Datum); +
* - ListaDatuma& dodaj_na_kraj(Datum); +
* - void ukloni(const Datum &d); //uklanja prvo pojavljivanje +
* - const Datum* najkasniji_datum(); +
* - void pisi() const; +
**/


int main()
{
    ListaDatuma l1;
    l1.dodaj_na_pocetak(Datum(27, 10, 2023))
      .dodaj_na_pocetak(Datum(28, 10, 2023))
      .dodaj_na_pocetak(Datum(29, 10, 2023));
    cout <<"l1 = "; l1.pisi(); cout << endl;

    cout << endl;
    l1.dodaj_na_kraj(Datum(1, 1, 2024)).dodaj_na_kraj(Datum(28, 2, 2022));
    cout <<"l1 = "; l1.pisi(); cout << endl;

    cout << endl;
    cout <<"l1.duzina() = " << l1.duzina() << endl;


    cout << endl;
    l1.ukloni(Datum(28, 10, 2023));
    cout <<"l1 = "; l1.pisi(); cout << endl;

    cout <<"l1.najkasniji_datum()->pisi(); "; l1.najkasniji_datum()->pisi(); cout<< endl;

    ListaDatuma l2(l1);
    l2.ukloni(Datum(1, 1, 2024));
    cout <<"l1 = "; l1.pisi(); cout << endl;
    cout <<"l2 = "; l2.pisi(); cout << endl;

    cout <<endl;

    Datum d1;
    cout << "d1 = "; d1.pisi(); cout << endl;

    cout <<endl;

    cout << "Datum::validan(31, 4, 2021): " << Datum::validan(31, 4, 2021) << endl;
    cout << "Datum::validan(31, 3, 2021): " << Datum::validan(31, 3, 2021) << endl;
    cout << "Datum::validan(29, 2, 2021): " << Datum::validan(29, 2, 2021) << endl;
    cout << "Datum::validan(29, 2, 2020): " << Datum::validan(29, 2, 2020) << endl;
    cout << "Datum::validan(32, 4, 2021): " << Datum::validan(32, 4, 2021) << endl;

    cout <<endl;

    Datum d2(31, 3, 2021);
    cout << "d2 = "; d2.pisi(); cout << endl;

    cout <<endl;

    Datum d3 = d2.sljedeci();
    cout << "d3 = "; d3.pisi(); cout << endl;
    Datum d4 = d3.sljedeci();
    cout << "d4 = "; d4.pisi(); cout << endl;

    cout <<endl;

    Datum d5(1, 1, 2023);
    cout << "d5 = "; d5.pisi(); cout << endl;
    cout << "d5.prethodni() = "; d5.prethodni().pisi(); cout << endl;


    Datum d6(1, 3, 2023);
    cout << "d6 = "; d6.pisi(); cout << endl;
    cout << "d6.prethodni() = "; d6.prethodni().pisi(); cout << endl;

    cout << "d4 = "; d4.pisi(); cout << endl;
    cout << "d4.prethodni() = "; d4.prethodni().pisi(); cout << endl;

    cout <<endl;
    cout << "d4 = "; d4.pisi(); cout << endl;
    cout << "d4.broj_dana_od_pocetka_godine() = " << d4.broj_dana_od_pocetka_godine() << endl;

    cout <<endl;
    Datum d7(27, 10, 2023);
    cout << "d4 = "; d4.pisi(); cout << endl;
    cout << "d7 = "; d7.pisi(); cout << endl;
    cout << "d7.razlika(d4) = " << d7.razlika(d4) << endl;

    cout <<endl;
    cout << "d7.get_dan_u_nedelji() = " << d7.get_dan_u_nedelji() << endl;
    cout << "d7.prethodni().get_dan_u_nedelji() = " << d7.prethodni().get_dan_u_nedelji() << endl;


    return 0;
}
