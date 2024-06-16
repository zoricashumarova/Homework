#include <iostream>

using namespace std;

/*
1. Напиши програма каде преку тастатура ќе се внеси низа од 10 природни броеви и
ќе се пресмета збир на сите парни вредности. Резултатот да се отпечати на екран.
*/

int main()
{
    int niza[10];
    int suma = 0;

    for (int i=0; i<10; i++) {
        int element;
        cin>>element;
        niza[i] = element;
    }

    for (int i=0; i<10; i++) {
        if (niza[i] % 2 == 0) {
            suma += niza[i];
        }
    }

    for (int i=0; i<10; i++) {
        cout<<niza[i];
    }

    cout<<endl;
    cout << "Sumata na parnite vrednosti od nizata e "<<suma<< endl;
    return 0;
}
