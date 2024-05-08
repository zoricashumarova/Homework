#include <iostream>

using namespace std;

/*
10. Напиши програма каде за внесен број ќе се провери колку 8-ки има во бројот.
(Бројот може да има к број на цифри)
Да се испечати резултатот.
*/

int main()
{
    int n, novBroj, cifra;
    cin>>n;

    int brojacNaOsumki = 0;

    novBroj = n;

    while (novBroj != 0) {
        cifra = novBroj % 10;

        if (cifra == 8) {
            brojacNaOsumki++;
        }

        novBroj = novBroj / 10;
    }

    cout << "Brojot na 8ki vo brojot " <<n<<" e "<<brojacNaOsumki<<endl;
    return 0;
}
