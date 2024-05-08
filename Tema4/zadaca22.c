#include <iostream>

using namespace std;

/*
22. Напиши програма каде што ќе внесуваш броеви се додека да внесеш број кој е
делив со 5. Пресметај полузбир од сите внесени броеви и отпечати го резултатот
на екран.
*/

int main()
{
    int n;
    cin>>n;

    int suma = 0;
    float poluZbir;

    while (n % 5 != 0) {
        suma += n;

        cin>>n;
    }

    poluZbir = suma * 1.0 / 2;

    cout << "Poluzbirot iznesuva: "<<poluZbir<< endl;
    return 0;
}
