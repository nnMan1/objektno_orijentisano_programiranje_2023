#include "Skup.h"

Skup::Skup()
{
    pop = 0;
}

Skup::Skup(const Skup& s) {
    this->pop = s.pop;
    this->data = new int[pop];

    for(int i=0;i<pop;i++)
        this->data[i] = s.data[i];
}

Skup::~Skup()
{
    if(pop != 0) {
        delete[] data;
        pop = 0;
    }
}

Skup::Skup(int v) {
    pop = 1;
    data = new int[1];
    data[0]=v;
}

void Skup::stampaj() const {
    cout << "{ ";
    for(int i=0;i<pop - 1;i++)
        cout << data[i] << ", ";

    cout << data[pop-1] << " }";
}

Skup Skup::unija(const Skup& s) const {
    Skup rez;
    rez.data = new int[pop + s.pop];

    int i=0, j=0, k=0;

    while(i < pop && j < s.pop) {
        if(data[i] < s.data[j])
            rez.data[k++] = data[i++];
        else
            rez.data[k++] = s.data[j++];
    }

    while(i < pop)
        rez.data[k++] = data[i++];


    while(j < s.pop)
        rez.data[k++] = s.data[j++];

    rez.pop = k;

    return rez;
}

Skup& Skup::dodaj(const Skup& s) {
    int *n_data = new int[pop + s.pop];

    int i=0, j=0, k=0;

    while(i < pop && j < s.pop) {
        if(data[i] < s.data[j])
            n_data[k++] = data[i++];
        else
            n_data[k++] = s.data[j++];
    }

    while(i < pop)
        n_data[k++] = data[i++];


    while(j < s.pop)
        n_data[k++] = s.data[j++];

    delete[] data;
    data = n_data;
    pop = k;

    return *this;
}

Skup Skup::razlika(const Skup& s) const {
    int i=0, j=0;

    Skup rez(*this);
    int n_pop = pop;

    while(i < pop && j < s.pop) {
        if(data[i] == s.data[j]) {
            rez.data[i] = (1<<31)-1;
            i++;
            j++;
            n_pop--;
        } else {
            if(data[i] < s.data[j])
                i++;
            else
                j++;
        }

    }

    sort(rez.data, rez.data+pop);
    rez.pop = n_pop;

    return rez;
}

Skup& Skup::ukloni(const Skup& s) {
    int i=0, j=0;

    int n_pop = pop;

    while(i < pop && j < s.pop) {
        if(data[i] == s.data[j]) {
            data[i] = (1<<31)-1;
            i++;
            j++;
            n_pop--;
        } else {
            if(data[i] < s.data[j])
                i++;
            else
                j++;
        }

    }

    sort(data, data+pop);
    pop = n_pop;

    return *this;
}

Skup Skup::presjek(const Skup& s) const {
    Skup rez;
    rez.data = new int[min(pop, s.pop)];

    int i=0, j=0, k=0;

    while(i < pop && j < s.pop) {
        if(data[i] == s.data[j]) {
            rez.data[k++] = data[i++];
            i++;
            j++;
        }
        else
            if(data[i] < s.data[j])
                i++;
            else
                j++;
    }

    rez.pop = k;

    return rez;
}
