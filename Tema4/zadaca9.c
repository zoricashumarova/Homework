#include <iostream>

using namespace std;

/*
9. Напиши програма каде за внесен број преку тастатура ќе се пресмета производ на
сите цифри кои се наоѓаат во интервалот [4-7]. (Бројот може да има к број на
цифри)
Да се испечати резултатот.
*/

int main()
{
    int n, novBroj, cifra;
    cin>>n;

    novBroj = n;

    int proizvod = 1;

    while (novBroj != 0) {
        cifra = novBroj % 10;

        if (cifra >= 4 && cifra <= 7) {
            proizvod *= cifra;
        }

        novBroj =  novBroj / 10;
    }

    cout << "Proizvodot na cifrite na brojot "<<n<<" e "<<proizvod<< endl;
    return 0;
}
