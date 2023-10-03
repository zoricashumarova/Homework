#include <stdio.h>
#include <stdlib.h>

/*
13. Напиши програма каде преку тастатура ќе може да се внесат три цели броеви.
Да се отпечати на екран најголемиот од броевите - “MAX: %d”.
*/

int main()
{
    printf("Vnesi dva celi broja!\n");
    int number1, number2, number3;
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);

    int maxNumber;

    if (number1 > number2 && number1 > number3) {
        maxNumber = number1;
    } else if (number2 > number1 && number2 > number3) {
        maxNumber = number2;
    } else {
        maxNumber = number3;
    }

    printf("MAX: %d", maxNumber);

    return 0;
}
