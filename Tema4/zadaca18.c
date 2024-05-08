#include <iostream>

using namespace std;

/*
18. Напиши програма каде што ќе внесуваш броеви се додека да внесеш негативен
број. Изброи колку од внесените броеви се парни, најди го минималниот внесен
број и пресметај производ на сите внесени броеви. Резултатот да се отпечати.
*/

int main()
{
    int n;
    int brojacParni = 0;

    int minBroj = 9;
    int proizvod = 1;

    cin>>n;

    while (n >= 0) {
        proizvod *= n;

        if (n % 2 == 0) {
            brojacParni++;
        }

        if (n < minBroj) {
            minBroj = n;
        }

        cin>>n;
    }

    cout << "Proizvod e: "<<proizvod<< endl;
    cout << "Min broj e: "<<minBroj<< endl;
    cout << "Ima vkupno: "<<brojacParni<<" parni broevi"<<endl;

    return 0;
}
