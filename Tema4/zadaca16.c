#include <iostream>

using namespace std;

/*
16. Напиши програма каде ќе може да се внесат два броеви и да се провери дали
најголемата цифра од првиот број е делива со најмалата цифра од вториот број.
Резултатот да се отпечати.
*/

int main()
{
    int n,m;

    int brojEden, brojDva;

    brojEden = n;
    brojDva = m;

    cin>>brojEden;
    cin>>brojDva;

    int minCifra = 9;
    int maxCifra = 0;

    int cifraPrvBroj = 0;
    int cifraVtorBroj = 0;

    while (brojEden != 0 && brojDva != 0) {
        cifraPrvBroj = brojEden % 10;
        cifraVtorBroj = brojDva % 10;

        if (cifraPrvBroj < minCifra) {
            minCifra =  cifraPrvBroj;
        }

        if (cifraVtorBroj > maxCifra) {
            maxCifra =  cifraVtorBroj;
        }

        brojEden = brojEden / 10;
        brojDva = brojDva / 10;
    }

    if (maxCifra % minCifra == 0) {
        cout << "Delivi se" << endl;
    } else {
        cout << "Ne se delivi" << endl;
    }


    return 0;
}
