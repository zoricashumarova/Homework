#include <iostream>

using namespace std;

/*
5. Напиши програма каде прелку тастатура ќе се внеси низа од 20 природни броеви и
ќе се пресмета производот од сите броеви кои се наоѓаат на парна позиција и
имаат парна вредност и сумата од сите броеви кои се наоѓаат на позиција делива
со 3 и имаат непарна вредност. Резултатот да се отпечати.
*/

int proizvod(int niza[]) {
    int proizvod = 1;

    for (int i=0; i<20; i++) {
        if (i % 2 == 0 && niza[i] % 2 == 0) {
            proizvod *= niza[i];
        }
    }

    return proizvod;
}

int suma(int niza[]) {
    int suma = 0;

    for (int i=0; i<20; i++) {
        if (i % 3 == 0 && niza[i] % 2 != 0) {
            suma += niza[i];
        }
    }

    return suma;
}

int main()
{
    int niza[20];

    for (int i=0; i<20; i++) {
        int element;
        cin>>element;
        niza[i] = element;
    }

    for (int i=0; i<20; i++) {
        cout<<niza[i];
    }

    int proizvodNaElementi = proizvod(niza);
    cout<<"Proizvodot e "<<proizvodNaElementi;

    int sumaNaElementi = suma(niza);
    cout<<"Sumata e "<<sumaNaElementi;

    return 0;
}
