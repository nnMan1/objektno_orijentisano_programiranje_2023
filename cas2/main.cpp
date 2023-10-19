#include <iostream>
#include "Ugao.h"
#include "Stack.h"

using namespace std;

//Ugao (ugao u radijanima) //ako ugao nije u opsegu 0-2pi cuvati odgovarajuci ugao u opsegu 0-2pi
    //set step - uzima ugao u stepenima
    //set rad
    // get step
    // get rad
    // stampaj
    // dodaj
    // oduzmi

//Stek cijelih brojeva
    //prazan konstruktor, inicijalizuje stek kapaciteta 10 elemenata +
    //destruktor +
    //dodavanje u stek, ako je stek pun prosiriti mu kapacitet +
    //da li je stek prazan +
    //uzimanje sa vrha steka, ako je stack prazan stampa odgovarajucu poruku i vraca 0
    //uklanjanje sa vrha steka, i vraca vrijednost uklnonjenog elementa +

int main()
{
    Ugao u1;
    //u1.set_rad(10);
    //cout << u1.get_rad();

    u1.set_deg(60, 10, 3);
    cout << "u1 = ";
    u1.stampaj();

    Ugao u2;
    u2.set_deg(30, 0, 0);
    cout << "\nu2 = ";
    u2.stampaj();

    Ugao u3;
    u3.set_deg(45);
    cout << "\nu3 = ";
    u3.stampaj();

    u3.dodaj(u1.dodaj(u2)); //prvo se na u1 doda u2, pa se tako uvecano u2 doda na u3
    cout << "\nu1 = u1 + u2; u3 = u3 + u1;" << endl;
    cout << "u1 = ";
    u1.stampaj();
    cout << "u3 = ";
    u3.stampaj();

    cout << "\nu1 = u1 - u2; u1 = u1 - u2;" << endl;
    u1.oduzmi(u2); //douzmemo u2 koje smo ranije dodali
    cout << "u1 = ";
    u1.oduzmi(u2).stampaj(); //oduzmemo jos jedno u2 i dobijamo 30deg, 10min, 3sec

    Ugao u4;
    u4.set_deg(5*360+270, 0, 1);
    cout<<"\nu4=";
    u4.stampaj();

    Ugao u5;
    u5.set_deg(-270, 0, 1);
    cout<<"\nu5=";
    u5.stampaj();


    Stack s1;
    cout << s1.empty() << endl;

    cout << s1.pop() << endl;

    s1.push(5);
    s1.push(6);
    s1.push(5);
    s1.push(73);
    s1.push(1);
    s1.push(5);
    s1.push(4);
    s1.push(2);
    s1.push(9);
    s1.push(8);
    s1.push(6);
    s1.push(3);
    s1.push(7);

    cout << "s1 = \n";

    while(!s1.empty())
        cout << s1.pop() << endl; //uklanjamo sve elemente sa stacka i istovremeno ih stampamo sve dok stack ne bude prazan

    cout << s1.top() << endl; //ako pokusamo da pristupimo elementu sa vrha vidjecemo da je stack prazan

    return 0;
}
