#include <iostream>

using namespace std;

/*
11. Напиши програма каде за внесен број ќе се испечатат во обратен редослед само
цифрите кои се деливи со 3. Да се испечати резултатот.
Input: 45983
Output:39
*/

int main()
{
    int n;
    cin>>n;

    int istBroj = n;
    int cifra;
    int novBroj = 0;

    while (istBroj != 0) {
        cifra = istBroj % 10;

        if (cifra % 3 == 0) {
            novBroj = novBroj * 10 + cifra;
        }

        istBroj = istBroj / 10;
    }

    cout << "Brojot e " <<novBroj<<endl;
    return 0;
}
