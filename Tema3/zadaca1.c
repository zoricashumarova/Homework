#include <stdio.h>
#include <stdlib.h>

/*
1. Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот се наоѓа во интервал од 30 до 50 и
соодветно треба да се отпечати “Brojot %d pripaga na intervalot [30, 50]”.
*/

int main()
{
    printf("Vnesi cel broj!\n");
    int number;
    scanf("%d", &number);

    if (number >= 30 && number <= 50) {
        printf("Brojot %d pripaga na intervalot [30, 50]", number);
    }

    return 0;
}
