#include <iostream>

using namespace std;

/*
3. Напиши програма каде преку тастатура ќе се внеси низа од 20 природни броеви и
ќе се отпечатат сите елементи кои имаат поголема вредност од својата позиција.
*/

int main()
{

    int niza[10];

    for (int i=0; i<10; i++) {
        int element;
        cin>>element;
        niza[i] = element;
    }

    for (int i=0; i<10; i++) {
            cout<<niza[i]<<" ";
    }

    cout<<endl;
    for (int i=0; i<10; i++) {
        if (niza[i] > i) {
            cout<<niza[i]<<" ";
        }
    }


    return 0;
}
