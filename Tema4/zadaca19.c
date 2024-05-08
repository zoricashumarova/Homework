#include <iostream>

using namespace std;

/*
19. Напиши програма каде што ќе внесуваш броеви се додека да внесеш 0. Пресметај
сума на сите внесени броеви и отпечати го резултатот.
*/

int main()
{
    int n;
    cin>>n;

    int suma = 0;

    while (n != 0) {
        suma += n;

        cin>>n;
    }


    cout << "Sumata e: "<<suma<< endl;
    return 0;
}
