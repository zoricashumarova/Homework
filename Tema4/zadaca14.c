#include <iostream>

using namespace std;

/*
14. Напиши програма каде за внесен број ќе се проверува дали сумата на цифрите е
делива со бројот на цифри. Резултатот да се отпечати.
*/

int main()
{
    int n;
    cin>>n;

    int suma = 0;
    int cifra, brojac;

    brojac = 0;

    int novBroj = n;

    while (novBroj != 0) {
        cifra = novBroj % 10;
        suma += cifra;
        brojac++;
        novBroj = novBroj / 10;
    }


    if (suma == brojac) {
        cout << "Ednakvi se" << endl;
    } else {
        cout << "Ne se ednakvi" << endl;
    }



    return 0;
}
