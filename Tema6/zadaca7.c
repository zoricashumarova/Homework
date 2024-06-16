#include <iostream>

using namespace std;

/*
7. Напиши програма каде преку тастатура ќе се внеси низа од n природни броеви.
Потребно е да се најде максималниот елемент и неговата позиција во низата и
минималниот елемент и неговата позиција во низата. Резултатот да се отпечати.
*/

int maxElement(int niza[], int n) {
    int maximalenEl = niza[0];

    for (int i=0; i<n; i++) {
        if (niza[i] > maximalenEl) {
            maximalenEl = niza[i];
        }
    }
    return maximalenEl;
}

int maxPozicija(int niza[], int n) {
    int maxPozicija = 0;
    int maximalenEl = niza[0];

    for (int i=0; i<n; i++) {
        if (niza[i] > maximalenEl) {
            maxPozicija = i;
        }
    }
    return maxPozicija;
}

int minElement(int niza[], int n) {
    int minimaleEl = niza[0];

    for (int i=0; i<n; i++) {
        if (niza[i] < minimaleEl) {
            minimaleEl = niza[i];
        }
    }
    return minimaleEl;
}

int minPozicija(int niza[], int n) {
    int minPozicija = 0;
    int manimalenEl = niza[0];

    for (int i=0; i<n; i++) {
        if (niza[i] < manimalenEl) {
            minPozicija = i;
        }
    }
    return minPozicija;
}

int main()
{
    int n;
    cin>>n;
    int niza[n];

    for (int i=0; i<n; i++) {
        int element;
        cin>>element;
        niza[i] = element;
    }

    for (int i=0; i<n; i++) {
        cout<<niza[i]<<" ";
    }

    int maxEl = maxElement(niza,n);
    int maxPoz = maxPozicija(niza,n);

    int minEl = minElement(niza,n);
    int minPoz = minPozicija(niza,n);

    cout<<endl;
    cout<<"Max element e "<<maxEl<<endl;
    cout<<"Max elem. se naoga na "<<maxPoz<< " pozicija "<<endl;


    cout<<"Min element e "<<minEl<<endl;
    cout<<"Min elem. se naoga na "<<minPoz<< " pozicija "<<endl;



    return 0;
}
