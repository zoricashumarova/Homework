#include <iostream>

using namespace std;

/*
8. Напиши програма каде за внесен број преку тастатура ќе се пресмета сумата од
сите парни цифри. (Бројот може да има к број на цифри)
Да се испечати резултатот.
*/

int main()
{
    int n, novBroj;
    cin>>n;
    int cifra;

    novBroj = n;

    int suma = 0;

    while (novBroj != 0) {
        cifra = novBroj % 10;

        if (cifra % 2 == 0) {
            suma+=cifra;
        }

        novBroj = novBroj / 10;
    }


    cout << "Sumata na site parni cifri vo brojot e: " <<suma<< endl;
    return 0;
}
