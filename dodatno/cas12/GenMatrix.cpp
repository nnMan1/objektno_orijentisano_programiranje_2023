#ifndef GENMATRIX_CPP
#define GENMATRIX_CPP
#include "GenMatrix.h"

template<class T>
GenMatrix<T>::GenMatrix(int rows, int cols)
{
    if(rows <= 0 || cols <= 0 || rows > 100 || cols > 100)
        throw GenMatrixSizeEx();

    this->rows = rows;
    this->cols = cols;
}


template<class T>
GenMatrix<T>::~GenMatrix()
{
    //dtor
}

template<class T>
T& GenMatrix<T>::operator()(int i, int j) {
    if(i<0 || j<0 || i>=rows || j>=cols)
        throw GenMatrixIndexEx();

    return this->data[i][j];
}

template<class T>
GenMatrix<T>& GenMatrix<T>::operator=(const GenMatrix<T>& o) {

    rows = o.rows;
    cols = o.cols;

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            data[i][j] = o.data[i][j];

    return *this;
}

template<class T>
template<class G>
GenMatrix<T> GenMatrix<T>::operator*(GenMatrix<G>& o) {
    if(rows != o.get_rows() || cols != o.get_cols())
        throw GenMatrixSizeEx();

    GenMatrix<T> ret(rows, cols);

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            ret(i,j) = data[i][j] * o(i, j);

    return ret;
}

template<class T>
GenMatrix<T> GenMatrix<T>::transponovana() {
    GenMatrix<T> ret(cols, rows);

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            ret(j,i) = data[i][j];

    return ret;
}

template<class T>
GenMatrix<T> GenMatrix<T>::sumCol() {
    GenMatrix<T> ret = *this;

    pair<T, int> col_sum[cols];
    for(int i=0;i<cols;i++)
        col_sum[i] = make_pair(0, i);

    for(int j=0;j<cols;j++)
        for(int i=0;i<rows;i++)
            col_sum[j].first += ret(i,j);

    sort(col_sum, col_sum + cols);

    for(int j=0;j<cols;j++) {
        int o_j = col_sum[j].second;

        for(int i=0;i<rows;i++)
            ret(i,j) = data[i][o_j];
    }

    return ret;
}

#endif
