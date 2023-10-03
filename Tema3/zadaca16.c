#include <stdio.h>
#include <stdlib.h>

/*
16. Напиши програма каде преку тастатура ќе може да се внесат четири цели броеви.
Да се отпечати на екран најмалиот од броевите - “MIN: %d”.
*/

int main()
{
    printf("Vnesi cetiri celi broja!\n");
    int number1, number2, number3, number4;
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);
    scanf("%d", &number4);

    int minNumber;

    if (number1 < number2 && number1 < number3 && number1 < number4) {
        minNumber = number1;
    } else if (number2 < number1 && number2 < number3 && number2 < number4) {
        minNumber = number2;
    } else if (number3 < number1 && number3 < number2 && number3 < number4) {
        minNumber = number3;
    } else {
        minNumber = number4;
    }

    printf("MIN: %d", minNumber);
    return 0;
}
