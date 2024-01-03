#ifndef VALUTA_H
#define VALUTA_H
#include <vector>
#include <map>
#include <set>
#include <list>
#include <queue>
#include <stack>
#include <string.h>
#include <iostream>
using namespace std;

/*
(10 poena) Kreirati klasu Valuta, koja sadrži dva zaštićena
podatka nazivtipa  char*  i  iznos tipa  double.
Podatakiznos  predstavlja vrijednost u tojvaluti koja se
dobija za 1gr zlata. Podatak iznos mora da bude veći od 0.
Prilikom postavljanja vrijednosti za naziv neophodno je napraviti
dubokukopiju. Obezbijediti da ne postoje dvije valute sa istim imenom.
    a.Napisati kontruktor sa dva argumenta koji sadrže
        vrijednosti zanaziv  i iznos redom. (5 poena)
    b.Napisati pristupne metode za naziv i iznos.
    Geteri moraju da imajuconst kvalifikator.
    Poštovati navedena ograničenja. (3 poena)
    c.Dodati  statičku promjenljivu  br_inst  tipa  int
    koja broji koliko jeintanci klase Valuta napravljeno. (5 poena
*/

class Valuta
{
    static vector<Valuta*> valutes_list;

    char *naziv;
    double iznos;

    public:
        Valuta(char*, double iznos);
        virtual ~Valuta();

        static void stampaj_valute() {
            for(int i=0;i<valutes_list.size();i++)
                cout << "(" << valutes_list[i]->naziv << ", " << valutes_list[i]->iznos << ")" << endl;
        }

    protected:

    private:
};

#endif // VALUTA_H
