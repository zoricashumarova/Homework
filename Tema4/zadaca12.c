#include <iostream>

using namespace std;

/*
12. Напиши програма каде ќе се внеси број преку тастатура.
Најди го следниот резултат:
((збир на парни цифри) + (производ на непарни цифри))/вкупен број на цифри
Input: 45986
((4 + 8 + 6)+(5 * 9))/5
Output: 12.6
*/

int main()
{
    int n, novBroj, cifra;
    cin>>n;

    int rezultat = 0;

    novBroj = n;

    int sumaNaParni = 0;
    int proizvodNaNeparni = 1;
    int brojNaCifri = 0;

    while (novBroj != 0) {
        cifra = novBroj % 10;
        brojNaCifri ++;

        if (cifra % 2 == 0) {
            sumaNaParni += cifra;
        } else {
            proizvodNaNeparni *= cifra;
        }

        novBroj = novBroj / 10;
    }

    rezultat = (sumaNaParni + proizvodNaNeparni)*1.0 / brojNaCifri;

    cout << "Suma na parni: " <<sumaNaParni<< endl;
    cout << "Proizvod na neparni: " <<proizvodNaNeparni<< endl;
    cout << "Broj na cifri: " <<brojNaCifri<< endl;
    cout << "Rezultat: " <<rezultat<< endl;

    return 0;
}
