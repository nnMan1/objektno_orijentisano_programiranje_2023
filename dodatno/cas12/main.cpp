#include <iostream>
#include "GenMatrix.h"
#include "Valuta.h"
#include "Test.h"
using namespace std;

template<class T, int n, int m>
class A {
    //klasa matrica dimenzije nxm

    //implementirati mnozenje matrica
    //matrice mogu da se mnoze ako je
    //broj kolona prve matrice isti kao broj kolona druge matrice

    template<int p>
    A<T, n, p> mul(A<T, m, p> b) {
        //pomnoziti this i b;
    }
};

//specijalizacija
template <class T>
class A<T, 3, 1> {

    A<T, 3, 1> mul(A<T, 3, 1> b) {
        //pomnoziti this i b;
    }
};

template class GenMatrix<int>;

int main()
{

    Valuta v1("euro", 0.01);
    Valuta v2("dolar", 0.02);
    Valuta::stampaj_valute();

    Valuta v3("dolar", 0.03);


    /*
    GenMatrix<float> g(2, 3);

    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            cin >> g(i,j);


    GenMatrix<float> g1 = g.sumCol();
    for(int i=0;i<g1.get_rows();i++) {
        for(int j=0;j<g1.get_cols();j++)
            cout << g1(i,j) << " ";
        cout <<endl;
    }


    /*GenMatrix<float> g(2, 3);

    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            cin >> g(i,j);

    GenMatrix<float> g1(1,1);
    g1 = g;

    GenMatrix<float> g3 = g1 * g;

     for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++)
            cout << g3(i,j) << " ";
        cout <<endl;
    }

    cout << "----------------------------\n";
    GenMatrix<int> g4(2, 3);
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            cin >> g4(i,j);

    cout << "----------------------------\n";
    GenMatrix<float> g5 = g.operator*(g4);

    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++)
            cout << g5(i,j) << " ";
        cout <<endl;
    }

    cout << "----------------------------\n";

    GenMatrix<float> g6 = g5.transponovana();
    for(int i=0;i<g6.get_rows();i++) {
        for(int j=0;j<g6.get_cols();j++)
            cout << g6(i,j) << " ";
        cout <<endl;
    }

    cout << "----------------------------\n";
    */


    return 0;
}
