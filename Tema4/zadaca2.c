#include <iostream>

using namespace std;

/*
1. Напиши програма каде ќе се пресмета сума од сите вредности помеѓу 1-30 кои се
деливи со 10 и производ од сите останати вредности. Резултатот да се отпечати.
*/

int main()
{
    int sumaDelivi = 0;
    int sumaOstanati = 0;

    for (int i=1; i<=30; i++) {
        if (i % 10 == 0) {
            sumaDelivi += i;
        } else {
            sumaOstanati += i;
        }
    }

    cout << sumaDelivi << endl;
    cout << sumaOstanati << endl;
    return 0;
}
