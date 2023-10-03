#include <stdio.h>
#include <stdlib.h>

/*
3. Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот завршува со цифрата 9.
Соодветно да се отпечати “Brojot %d zavrsuva so 9” или “Brojot %d ne zavrsuva so 9”.
*/

int main()
{
    printf("Vnesi cel broj!\n");
    int number;
    scanf("%d", &number);

    if(number % 10 == 9) {
        printf("Brojot %d zavrsuva so 9", number);
    } else {
        printf("Brojot %d ne zavrsuva so 9", number);
    }


    return 0;
}
