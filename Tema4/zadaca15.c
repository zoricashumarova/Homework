#include <iostream>

using namespace std;

/*
15. Напиши програма каде за внесен број ќе се провери дали бројот е делив со
најголемата цифра која ја содржи. Резултатот да се отпечати.
*/

int main()
{
    int n, cifra;
    cin>>n;

    int novBroj = n;

    int maxCifra = 0;

    while (novBroj != 0) {
        cifra = novBroj % 10;

        if (cifra > maxCifra) {
            maxCifra = cifra;
        }

        novBroj = novBroj / 10;
    }

    if (n % maxCifra == 0) {
        cout << "Delivi se" << endl;
    } else {
        cout << "Ne se delivi" << endl;
    }


    return 0;
}
