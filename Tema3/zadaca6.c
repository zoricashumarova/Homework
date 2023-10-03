#include <stdio.h>
#include <stdlib.h>

/*
6. Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот е делив со 6 или завршува со цифрата 4.
Соодветно да се отпечати “Brojot %d e deliv so 6 ili zavrsuva so 4” или “Brojot %d ne
go ispolnuva uslovot da e deliv so 6 ili da zavrsuva so 4”.
*/

int main()
{
    printf("Vnesi cel broj!\n");
    int number;
    scanf("%d", &number);

    int edinici = number % 10;

    if(number % 6 == 0 || edinici == 4) {
        printf("Brojot %d e deliv so 6 ili zavrsuva so 4", number);
    } else {
        printf("Brojot %d ne go ispolnuva uslovot da e deliv so 6 ili da zavrsuva so 4", number);
    }
    return 0;
}
