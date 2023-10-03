#include <stdio.h>
#include <stdlib.h>

/*
5. Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот е делив со 3 и завршува со цифрата 5.
Соодветно да се отпечати “Brojot %d e deliv so 3 i zavrsuva so 5” или “Brojot %d ne
go ispolnuva uslovot da e deliv so 3 i da zavrsuva so 5”.
*/

int main()
{
    printf("Vnesi cel broj!\n");
    int number;
    scanf("%d", &number);

    int edinici = number % 10;

    if(number % 3 == 0 && edinici == 5) {
        printf("Brojot %d e deliv so 3 i zavrsuva so 5!\n", number);
    } else {
        printf("Brojot %d ne go ispolnuva uslovot da e deliv so 3 i da zavrsuva so 5!\n", number);
    }
    return 0;
}
