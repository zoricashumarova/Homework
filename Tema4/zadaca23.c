#include <iostream>

using namespace std;

/*
23. Напиши програма каде ќе внесуваш броеви се додека не го внесеш бројот 55 и
определи го најголемиот внесен број. Отпечати го резултатот.
*/

int main()
{
    int n;
    cin>>n;

    int maxBroj = 0;

    while (n != 55) {
        if (n > maxBroj) {
            maxBroj = n;
        }

        cin>>n;
    }

    cout << "Max broj e "<<maxBroj<< endl;
    return 0;
}
