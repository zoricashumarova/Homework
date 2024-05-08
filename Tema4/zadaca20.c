#include <iostream>

using namespace std;

/*
20. Напиши програма каде што ќе можеш да внесуваш броеви се додека да го внесеш
бројот 25. Пресметај производ од сите внесени броеви деливи со 3 и отпечати го
резултатот на екран.
*/

int main()
{

    int n;
    cin>>n;

    int proizvod = 1;


    while (n != 25) {
        if (n % 3 == 0) {
            proizvod *= n;
        }

        cin>>n;
    }

    cout << "Proizvod e: " <<proizvod<<endl;
    return 0;
}
