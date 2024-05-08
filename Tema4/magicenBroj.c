#include <iostream>

using namespace std;

/*
Да се напише програма каде од тастатура се внесува еден шестцифрен број. Програмата
печати DA доколку бројот е магичен, а NE во спротивно.
Еден број е магичен доколку за него важи дека е делив со својата прва цифра и не е
делив со збирот на последните две цифри или доколку не е делив со својата втора цифра
и не е делив со збирот на последните две цифри.
Да се внимава на делење со 0, односно да се испечати соодветна порака во таков случај.
*/

int main()
{
    int n;
    cout << "Vnesi sestcifren broj" << endl;
    cin>>n;

    int istBroj = n;

    int prvaCifra, vtoraCifra, poslednaCifra, predposlednaCifra;
    int sumaPosledniDveCifri = 0;

    while (istBroj != 0) {
        prvaCifra = istBroj / 100000;
        vtoraCifra = (istBroj / 10000) % 10;

        poslednaCifra = istBroj % 10;
        predposlednaCifra = (istBroj / 10) % 10;

        sumaPosledniDveCifri = poslednaCifra + predposlednaCifra;

        istBroj = istBroj / 1000000;
    }

    if ((n % prvaCifra == 0 && sumaPosledniDveCifri != 0 && n % sumaPosledniDveCifri != 0) || (n % vtoraCifra != 0 && vtoraCifra !=0 && sumaPosledniDveCifri != 0 && n % sumaPosledniDveCifri != 0)) {
        cout << "DA" << endl;
    } else if(sumaPosledniDveCifri == 0 || vtoraCifra == 0) {
        cout<<"Delenje so 0"<<endl;
    } else {
        cout << "NE" << endl;
    }

    return 0;
}
