#include <iostream>
#include "GenMatrix.h"
using namespace std;

template<class T, int n, int m>
class A{
    public:
    template<int p>
    A<T, n, p> mul(A<T, m, p> b) {

    }
};

template<class T> //specijalizacija klase
class A<T, 3, 1> {
    int k = 5;
    public:
    A<T, 3, 1> mul(A<T, 3, 1> b) {

    }

};

template class GenMatrix<int>;

template<class T>
ostream& mul(ostream& os, GenMatrix<T>& g) {
    for(int i=0;i<g.get_rows();i++) {
        for(int j=0;j<g.get_cols();j++)
            cout << g(i,j) << " ";

        cout << endl;
    }
}

template<>
ostream& mul(ostream& os, GenMatrix<string>& g) { //specijalizacija funckije

}

template ostream& mul(ostream& os, GenMatrix<float>& g); //specijalizacija

int main()
{
    A<int, 3, 2> x;
    A<int, 2, 2> y;

    A<int, 3, 2> rez = x.mul<2>(y);
    A<int, 3, 1> vec1;
    A<int, 3, 1> vec2;
    A<int, 3, 1> vec3 = vec1.mul(vec2);

    return 0;
}
