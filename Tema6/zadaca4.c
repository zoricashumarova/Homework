#include <iostream>

using namespace std;

/*
4. Напиши програма каде ќе се внеси низа од 20 природни броеви и ќе се отпечатат
по 5 броеви во ред.
*/

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
        if(i == 4 || i == 9 || i == 14 || i == 19) {
            cout<<endl;
        }
    }


    return 0;
}
