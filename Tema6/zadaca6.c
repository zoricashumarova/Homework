#include <iostream>

using namespace std;

/*
6. Напиши програма каде преку тастуатура ќе се внеси низа од n природни броеви.
Потребно е да се определи полузбирот од сите вредности во низата кои се деливи
со 4 и завршуваат на 6.
*/

int kalkulacija(int niza[], int n) {
    int suma = 0;
    for (int i=0; i<n; i++) {
        if (niza[i] % 4 == 0 && niza[i] % 10 = 6) {
            suma += niza[i];
        }
    }
    return suma;
}

int main()
{
    int n;
    int niza[n];

    for (int i=0; i<n; i++) {
        int element;
        cin>>element;
        niza[i] = element;
    }

    for (int i=0; i<n; i++) {
        cout<<niza[i];
    }

    int sumaOdElementi = suma(niza, n);
    cout<<"Poluzbirot e"<<sumaOdElementi / 2.0<<endl;

    return 0;
}
