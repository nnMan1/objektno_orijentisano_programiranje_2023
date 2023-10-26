#ifndef LISTADATUMA_H
#define LISTADATUMA_H
#include <iostream>
#include "Datum.h"

using namespace std;

class Node {
    public:
    Datum value;
    Node *next;

    Node(const Datum& value, Node *next):value(value), next(next){};
};

class ListaDatuma
{
    Node *head, *tail;

    public:
        ListaDatuma();
        ListaDatuma(const ListaDatuma&);
        virtual ~ListaDatuma();
        ListaDatuma& dodaj_na_pocetak(const Datum&);
        ListaDatuma& dodaj_na_kraj(const Datum&);
        void pisi() const;
        int duzina() const;
        ListaDatuma& ukloni(const Datum &d);
        const Datum* najkasniji_datum();

    protected:
        Node* dodaj_na_kraj(Node*, const Datum&);
        Node* ukloni(Node*, const Datum&);

    private:
};

#endif // LISTADATUMA_H
