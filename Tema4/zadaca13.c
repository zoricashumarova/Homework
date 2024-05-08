#include <iostream>

using namespace std;

/*
13. Напиши програма каде ќе се провери дали сумата од цифрите на внесениот број е
делива со цифрата единици на бројот. Резултатот да се отпечати.
*/

int main()
{
    int n, cifra;
    cin>>n;

    int novBroj = n;

    int suma = 0;

    int cifraEdinici = n % 10;

    while (novBroj != 0) {
        cifra = novBroj % 10;
        suma += cifra;

        novBroj = novBroj / 10;
    }

    if (suma % cifraEdinici == 0) {
        cout<<suma<<" e deliv so "<<cifraEdinici<<endl;
    } else {
        cout<<suma<<" ne e deliv so "<<cifraEdinici<<endl;
    }

    return 0;
}
