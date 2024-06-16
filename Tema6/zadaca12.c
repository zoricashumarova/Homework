#include <iostream>

using namespace std;

/*
12. Напиши програма каде ќе се внеси низа од 10 елементи и ќе се формираат две
нови низи, каде што првата низа ќе ги соддржи само елементите кои биле на парни
позиции во внесената низа, а втората низа ќе ги содржи сите елементи кои биле на
непарни позиции. Да се испечатат трите низи.
*/

int main()
{
    int nizaEden[10];

    for (int i=0; i<10; i++) {
        int element;
        cin>>element;
        nizaEden[i] = element;
    }

    cout<<"Prva niza: ";
    for (int i=0; i<10; i++) {
        cout<<nizaEden[i]<<" ";
    }

    int nizaDva[5];
    int nizaTri[5];


    for (int i=0; i<10; i++) {
        if (i % 2 == 0) {
            nizaDva[i] = nizaEden[i];
        } else {
            nizaTri[i] = nizaEden[i];
        }
    }

    cout<<endl;
    cout<<"Niza parni pozicii: ";
    for (int i=0; i<5; i++) {
        cout<<nizaDva[i]<<" ";
    }


    cout<<endl;
    cout<<"Niza neparni pozicii: ";
    for (int i=0; i<5; i++) {
        cout<<nizaTri[i]<<" ";
    }

    return 0;
}
