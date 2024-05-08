#include <iostream>

using namespace std;

/*
17. Напиши програма каде што ќе може да се внесат два броеви и да се провери дали
сумата од најголемата и најмалата цифра од првиот број е еднаква со производот
на најмалата и најголемата цифра на вториот број. Резултатот да се отпечати.
*/

int main()
{
    int n,m;

    int brojEden, brojDva;

    brojEden = n;
    brojDva = m;

    cin>>brojEden;
    cin>>brojDva;

    int minCifraPrv = 9;
    int maxCifraPrv = 0;

    int minCifraVtor = 9;
    int maxCifraVtor = 0;

    int cifraPrvBroj = 0;
    int cifraVtorBroj = 0;

    int suma = 0;
    int proizvod = 1;

    while (brojEden != 0 && brojDva != 0) {
        cifraPrvBroj = brojEden % 10;
        cifraVtorBroj = brojDva % 10;

        if (cifraPrvBroj < minCifraPrv) {
            minCifraPrv = cifraPrvBroj;
        }

        if (cifraVtorBroj < minCifraVtor) {
            minCifraVtor = cifraVtorBroj;
        }

        if (cifraPrvBroj > maxCifraPrv) {
            maxCifraPrv = cifraVtorBroj;
        }

        if (cifraVtorBroj > maxCifraVtor) {
            maxCifraVtor = cifraVtorBroj;
        }

        brojEden = brojEden / 10;
        brojDva = brojDva / 10;
    }

    suma = minCifraPrv + maxCifraPrv;
    proizvod = minCifraVtor * maxCifraVtor;

    if (suma == proizvod) {
        cout << "Ednakvi se" << endl;
    } else {
        cout << "Ne se ednakvi" << endl;
    }


    return 0;
}
