#include <iostream>

using namespace std;

class Tacka {
    int x, y;

    public:
    Tacka(int a, int b = 5) {
        x = a;
        y = b;
    }

    void stampaj() {
        cout << x<< " " << y <<endl;
    }
};

int zbir(int x, int y = 1) {
    int z = x + y;
    x = 10;
    return z;
}

int zbir1(int *x, int y) {
    int z = *x + y;
    *x = 10;
    return z;
}

int suma_elemenata_niza(int * arr, int n) {
    int s = 0;
    arr[2] = 7;
    for(int i = 0 ;i < 5 ;i ++)
        s += arr[i];

    return s;
}

void stampaj_tacku(struct Tacka t) {
    cout << "(" << t.x << ", " << t.y << ")";
}

int main()
{
    struct Tacka t1{5, 6};
    t1.stampaj();

    cout << t1.x;
    /*
    int x = 5, y = 9;
    int z = zbir(x);

    cout << z;
    /*
    int x = 10;
    int y = 5;
    cout << zbir(x, y) <<endl;
    //cout << "Hello world!" << endl;

    int * a = &x;
    *a = 9;
    cout << "*a = " << *a;
    cout << "x = " << x;
    */
    /*
    int x, y;

    cin >> x >> y;

    if(x > y)
        printf("%d", y);
    else
        cout << x;
    */
    /*

    int x[10];
    int *y = new int[5]; //kreirali smo niz duzine 10
    int a = 5;
    for(int i=0;i<5;i++) {
        a = 7;
        cout << a << endl;
        cin >> y[i];
    }

    cout << a <<endl;

    cout << suma_elemenata_niza(y, 5) <<endl;

    for(int i=0;i<5;i++)
        cout << y[i] << " ";
    */
    /*
    int **matr = new int*[5];

    for(int i=0;i<5;i++)
        matr[i] = new int[5];

    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            matr[i][j] = i * j;

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++)
            cout << matr[i][j] <<" ";
        cout << endl;
    }

    for(int i=0;i<5;i++)
        delete[] matr[i];

    delete[] matr;
    */
    return 0;
}
