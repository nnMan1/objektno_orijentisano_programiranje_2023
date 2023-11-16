#include <iostream>
#include "Sfera.h"
#include "Valjak.h"
#include "RedTijela.h"

using namespace std;

///Napisati sljedece klase
///Apstraktna klasa Tijelo
///     svako tijelo ima string koji predstavlja id tijela
///     ne postoje dva tijela sa istim id-jem
///     cisto virtuelna metoda char vrsta - vraca karakter koji odredjuje vrstu tijela
///     cisto virtuelna metoda double zapremina
///     cisto virtuelna metoda Tijelo* kopija
///     cisto virtuelna metoda void pisi()

///Klasa Sfera javno izvedena iz klase Tijelo
///ID za sferu je oblika S1, S2, S3 ...
///Sfera je zadata poluprecnikom             +
///Oznaka vrste predmeta je 'S'              +
///Stampa se kao id(r). Npr. S2(3)           +

///Klasa Valjak javno izvedena iz klase Tijelo
///ID za valjak je oblika V1, V2, V3 ...     +
///Zadaje se poluprecnikom r i obimom h      +
///Oznaka vrste predmeta je 'V'              +
///Stampa se kao id(r, h). Npr V5(3,4)       +

///Klasa RedTijela, stvara se prazan red zadatog kapaciteta (podrazumijevano 5).            +
///Implementirati konstruktor kopije
///Moze da se ispita da li je pun ili prazan                                                +
///Da se stavi jedno tijelo na kraj reda, pokusaj stavljanja u pun red prekida program      +
///Da se uzme tijelo sa pocetka reda, uzimanje tijela iz praznog reda prekida program       +
///Metoda pisi. red se ispisuje u obliku r[t, t, ..., t]



int main()
{
    Sfera s1;
    s1.pisi(); cout<<endl;

    Tijelo* s2 = s1.kopija();
    s2->pisi(); cout<<endl;

    Sfera s3;
    s3.pisi(); cout<<endl;

    Valjak v1(2, 4);
    v1.pisi(); cout<<endl;

    cout << "------------------------\n";

    RedTijela r(7);
    r.dodaj(s1).dodaj(v1);

    r.pisi(); cout<<endl;

    r.uzmi().pisi(); cout<<endl;
    r.ukloni().pisi(); cout<<endl;
    r.uzmi().pisi(); cout<<endl;

    delete s2;

    return 0;
}
