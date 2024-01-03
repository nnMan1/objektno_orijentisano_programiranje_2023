#ifndef GENMATRIX_H
#define GENMATRIX_H
#import <iostream>
#include <exception>
using namespace std;

class GenMatrixExc: public exception {

};

class GenMatrixSizeEx: public GenMatrixExc {
    const char* what() noexcept {
        return "Velicina matrice nije dobra";
    }
};


class GenMatrixIndexEx: public GenMatrixExc {
    const char* what() noexcept {
        return "Indeks izvan opsega matrice";
    }
};

template<class T>
class GenMatrix
{
    T data[100][100];
    int rows, cols;
    public:
        GenMatrix(int rows, int cols);
        T& operator()(int i, int j);
        GenMatrix<T>& operator=(const GenMatrix<T>&);

        template<class G>
        GenMatrix<T> operator*(GenMatrix<G>);

        template<class G>
        GenMatrix<T> mul(GenMatrix<G> g) {
        }
        virtual ~GenMatrix();

        int get_rows();
        int get_cols();


    protected:

    private:
};


#include "GenMatrix.cpp"
#endif // GENMATRIX_H
