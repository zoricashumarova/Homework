#include <iostream>

using namespace std;

/*
9. Напиши програма каде ќе се внесат две низи од 10 елементи и да се определи
производот на сумите на вредностите по позиции. Резултатот да се отпечати.
*/

int proizvod(int nizaEden[], int nizaDva[]) {
    int proizvod = 1;

    for (int i=0; i<10; i++) {
        int suma = nizaEden[i] + nizaDva[i];
        proizvod *= suma;
    }

    return proizvod;
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
    int proizvodNaElem = proizvod(nizaEden, nizaDva);
    cout<<proizvodNaElem;
    return 0;
}
