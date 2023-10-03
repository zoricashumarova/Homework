#include <stdio.h>
#include <stdlib.h>

/*
2. Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот е делив со 61 и соодветно да отпечати
“Brojot %d e deliv so 61” или “Brojot %d ne e deliv so 61”.
*/

int main()
{
    printf("Vnesi cel broj!\n");
    int number;
    scanf("%d", &number);

    if (number % 61 == 0) {
        printf("Brojot %d e deliv so 61.\n", number);
    } else {
        printf("Brojot %d ne e deliv so 61.\n", number);
    }
    return 0;
}
