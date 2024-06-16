#include <iostream>

using namespace std;

/*
2. Напиши програма каде преку тастатура ќе се внеси низа од 10 природни броеви и
ќе се избројат колку елементи се наоѓаат во интервал [10, 40]. Резултатот да се
отпечати.
*/

int main()
{
    int niza[10];
    int brojac = 0;

    for (int i=0; i<10; i++) {
            int element;
            cin>>element;
            niza[i] = element;
    }

    for (int i=0; i<10; i++) {
        if (niza[i] >= 10 && niza[i] <= 40) {
            brojac++;
        }
    }

    cout << brojac << endl;
    return 0;
}
