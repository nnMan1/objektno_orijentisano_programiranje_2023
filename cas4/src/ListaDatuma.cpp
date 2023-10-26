#include "ListaDatuma.h"

ListaDatuma::ListaDatuma()
{
    head = NULL;
    tail = NULL;
}

ListaDatuma::ListaDatuma(const ListaDatuma& l) {

    head = NULL;

    Node *tmp = l.head;

    while(tmp != NULL) {
        dodaj_na_kraj(tmp->value);
        tmp = tmp->next;
    }
}

ListaDatuma& ListaDatuma::dodaj_na_pocetak(const Datum& d) {
    head = new Node(d, head);
    return *this;
}

Node* ListaDatuma::dodaj_na_kraj(Node* head, const Datum& d) {
    if(head == NULL)
        return new Node(d, NULL);

    head->next = dodaj_na_kraj(head->next, d);
    return head;
}

ListaDatuma& ListaDatuma::dodaj_na_kraj(const Datum& d) {
    head = dodaj_na_kraj(head, d);
    return *this;
}

void ListaDatuma::pisi() const {
    Node *tmp = head;

    while(tmp != NULL) {
        tmp->value.pisi();

        if(tmp->next != NULL)
            cout<<" -> ";

        tmp = tmp->next;
    }
}

int ListaDatuma::duzina() const {
    Node* tmp = head;
    int br = 0;

    while(tmp != NULL) {
        tmp = tmp->next;
        br++;
    }
    return br;
}

ListaDatuma& ListaDatuma::ukloni(const Datum& d) {
    head = ukloni(head, d);
    return *this;
}

Node* ListaDatuma::ukloni(Node* head, const Datum& d) {
    if(head == NULL) return head;

    if(head->value.razlika(d) == 0) {
        Node* ret = head->next;
        delete head;
        return ret;
    }

    head->next = ukloni(head->next, d);
    return head;
}

const Datum* ListaDatuma::najkasniji_datum() {
    Datum *ret =  NULL;
    Node *tmp = head;

    while(tmp != NULL) {
        if(ret == NULL || ret->razlika(tmp->value) < 0)
            ret =  &(tmp->value);

        tmp = tmp->next;
    }

    return ret;
}

ListaDatuma::~ListaDatuma()
{
    Node * tmp = head;
    while(tmp != NULL) {
        Node *next = tmp->next;
        delete tmp;

        tmp = next;
    }

    head = NULL;
}


