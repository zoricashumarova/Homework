#include <iostream>

using namespace std;

/*
3. Напиши програма каде што во ранг од [100, 500] ќе се избројат колку елементи
завршуваат на 5, и колку елементи завршуваат на 6 и од кој елемент има повеќе.
Резултатот да се отпечати.
*/

int main()
{
    int zavrsuvaatNa5 = 0;
    int zavrsuvaatNa6 = 0;

    for (int i=100; i<500; i++) {
        if (i % 10 == 5) {
            zavrsuvaatNa5++;
        }

        if (i % 10 == 6) {
            zavrsuvaatNa6++;
        }
    }

    if (zavrsuvaatNa5 > zavrsuvaatNa6) {
        cout <<"Ima poveke sto zavrsuvaat na 5"<< endl;
    } else if (zavrsuvaatNa5 < zavrsuvaatNa6) {
        cout <<"Ima poveke sto zavrsuvaat na 6"<< endl;
    } else {
        cout <<"Ima isto"<< endl;
    }

    cout << zavrsuvaatNa5 << endl;
    cout << zavrsuvaatNa6 << endl;
    return 0;
}
