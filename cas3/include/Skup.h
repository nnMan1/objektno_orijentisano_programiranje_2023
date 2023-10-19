#ifndef SKUP_H
#define SKUP_H
#include <iostream>
#include <algorithm>

using namespace std;


class Skup
{
    //pretpostavicemo da su skupovi sortirani.
    //posto poredak elemenata nije bitan, i sami organizujemo kako se cuvaju podaci mozemo da pravimo takvu pretpostavku

    int * data;
    int pop;

    public:
        Skup();
        Skup(const Skup&);
        Skup(int);
        virtual ~Skup();

        Skup unija(const Skup&) const;
        Skup& dodaj(const Skup&);
        Skup razlika(const Skup&) const;
        Skup& ukloni(const Skup&);
        Skup presjek(const Skup&) const;
        void stampaj() const;
        int size() {return pop;}

    protected:

    private:
        void ukloni_duplikate();
};

#endif // SKUP_H
