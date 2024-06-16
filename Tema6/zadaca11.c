#include <iostream>

using namespace std;

/*
11. Напиши програма каде ќе се внесат две низи од по 10 елементи и ќе се формира
нова низа од поголемата вредност по позиции. Отпечати ги трите низи.
*/

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

    int nizaTri[10];

    cout<<endl;

    for (int i=0; i<10; i++) {
            if (nizaEden[i] > nizaDva[i]) {
                nizaTri[i] = nizaEden[i];
            } else {
                nizaTri[i] = nizaDva[i];
            }
    }

    cout<<"Novata niza e: ";
    for (int i=0; i<10; i++) {
        cout<<nizaTri[i]<<" ";
    }
    return 0;
}
