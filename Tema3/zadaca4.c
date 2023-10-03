#include <stdio.h>
#include <stdlib.h>

/*
4. Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот завршува со 25.
Соодветно да се отпечати “Brojot %d zavrsuva so 25” или “Brojot %d ne zavrsuva so
25”.
*/

int main()
{
    printf("Vnesi cel broj!\n");
    int number;
    scanf("%d", &number);

    if(number % 100 == 25) {
        printf("Brojot %d zavrsuva so 25", number);
    } else {
        printf("Brojot %d ne zavrsuva so 25", number);
    }
    return 0;
}
