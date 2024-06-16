#include <iostream>

using namespace std;

/*
8. Напиши програма каде ќе се внесат две низи од по 10 елементи и ќе се определи
сумата од производите на вредностите по позиции. Резултатот да се отпечати.
*/

int suma(int nizaEden[], int nizaDva[]) {
    int suma = 0;

    for (int i=0; i<10; i++) {
        int proizvod = nizaEden[i] * nizaDva[i];
        suma += proizvod;
    }

    return suma;
}

int main()
{
    int nizaEden[10];
    int nizaDva[10];

    for (int i=0; i<10; i++) {
        int element;
        cin>>element;
        nizaEden[i] = element;
    }

    for (int i=0; i<10; i++) {
        int element;
        cin>>element;
        nizaDva[i] = element;
    }

    cout<<"Prva niza: ";
    for (int i=0; i<10; i++) {
        cout<<nizaEden[i]<<" ";
    }

    cout<<endl;
    cout<<"Vtora niza: ";
    for (int i=0; i<10; i++) {
        cout<<nizaDva[i]<<" ";
    }

    cout<<endl;
    int sumaNaElem = suma(nizaEden, nizaDva);
    cout<<sumaNaElem;
    return 0;
}
