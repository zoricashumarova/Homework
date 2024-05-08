#include <iostream>

using namespace std;

/*
21. Напиши програма каде ќе внесуваш броеви преку тастатура се додека не внесеш
негативен број. Изброј колку од внесените броеви се наоѓаат во интервал [10-30].
Отпечати го резултатот.
*/

int main()
{
    int n;
    cin>>n;

    int brojac = 0;

    while (n > 0) {
        if ( n>= 10 && n<=30 ) {
            brojac++;;
        }
        cin>>n;
    }

    cout << "Vneseni se " <<brojac<<" broevi"<<endl;
    return 0;
}
