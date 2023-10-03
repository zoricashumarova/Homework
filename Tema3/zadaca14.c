#include <stdio.h>
#include <stdlib.h>

/*
14. Напиши програма каде преку тастатура ќе може да се внесат три цели броеви.
Да се отпечати на екран најмалиот од броевите - “MIN: %d”.
*/

int main()
{
    printf("Vnesi tri celi broja!\n");
    int number1, number2, number3;
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);

    int minNumber;

    if (number1 < number2 && number1 < number3) {
        minNumber = number1;
    } else if (number2 < number1 && number2 < number3) {
        minNumber = number2;
    } else {
        minNumber = number3;
    }

    printf("MIN: %d", minNumber);

    return 0;
}
