#include <iostream>

using namespace std;

/*
24. Напиши програма каде ќе внесуваш броеви се додека не го внесеш бројот 23.
Определи го најмалиот внесен број и отпечати го резултатот.
*/

int main()
{
    int n;
    cin>>n;

    int minBroj = n;

    while (n != 23) {
        if (n < minBroj) {
            minBroj = n;
        }

        cin>>n;
    }


    cout<<"Min broj e: "<<minBroj<<endl;

    return 0;
}
