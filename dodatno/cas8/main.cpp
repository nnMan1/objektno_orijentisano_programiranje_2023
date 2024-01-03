#include <iostream>
#include "Tijelo.h"
#include "Sfera.h"
#include "Valjak.h"
#include "RedTijela.h"
#include <exception>

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
///Zadaje se poluprecnikom r i visinom h      +
///Oznaka vrste predmeta je 'V'              +
///Stampa se kao id(r, h). Npr V5(3,4)       +

///Klasa RedTijela, stvara se prazan red zadatog kapaciteta (podrazumijevano 5).            +
///Implementirati konstruktor kopije
///Moze da se ispita da li je pun ili prazan                                                +
///Da se stavi jedno tijelo na kraj reda operator +=, pokusaj stavljanja u pun baciti exception          +
///Da se uzme tijelo sa i-te pozicije, operator[], uzimanje tijela iz praznog reda prekida program       +
///Metoda pisi. red se ispisuje u obliku r[t, t, ..., t], operator ostream

void my_terminate() {
    cout << "Neki exception nije uhvacen";
}

int main()
{
    set_terminate(my_terminate);
    //Tijelo t1("T5");
    Sfera s1(5);
    cout << s1 << endl;

    Tijelo* t2 = &s1;
    t2->pisi(cout); cout <<endl;

    Sfera s2(5);
    s2.pisi(cout); cout <<endl;

    Valjak v1(2, 3);
    v1.pisi(cout); cout<<endl;

    cout << v1 <<endl;

    RedTijela r(7);
    r+=(v1);
    (r+=s2) += s1;
    cout << r <<endl;

    Tijelo* t3 = r.top();
    cout << *t3 << " " << r << endl;

    cout << --r <<endl;
    cout << r-- << endl;
    cout << r << endl;

    try {
    cout << *(r[5]) << endl;
    } catch (RedTijelaEx *ex) {
        cout << ex->what() << endl;
        delete ex;
    } catch (RedTijelaUnderflow ex) {
        cout << ex.what() << endl;
        exit(2);
    } catch (RedTijelaEx ex) {
        cout << ex.what() << endl;
        exit(2);
    }
    return 0;
}
