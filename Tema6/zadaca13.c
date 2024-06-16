#include <iostream>

using namespace std;

/*
13. Напиши програма каде ќе се внеси низа од n елементи. Изврши трансформација
така што два соседни елементи ќе си ги заменат местата. Новодобиената низа да
се отпечати.
*/

int main()
{
    int n;
    cin>>n;
    int niza[n];
    int novaNiza[n];


    for (int i=0; i<n; i++) {
        int element;
        cin>>element;
        niza[i] = element;
    }

    cout<<"Prvicna niza: ";
    for (int i=0; i<n; i++) {
        cout<<niza[i]<<" ";
    }

    for (int i=0; i<n-1; i += 2) {
        int temp = niza[i];
        niza[i] = niza[i + 1];
        niza[i + 1] = temp;
    }

    cout << "Nova niza: ";
    for (int i = 0; i < n; i++) {
        cout << niza[i] << " ";
    }

    return 0;
}
