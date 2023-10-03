#include <stdio.h>
#include <stdlib.h>

/*
17. Напиши програма каде преку тастатура ќе може да се внесат три цели броеви.
Да се определи разликата помеѓу најголемиот и најмалиот број и да се отпечати на
екран резултатот.
*/

int main()
{
    printf("Vnesi tri celi broja!\n");
    int number1, number2, number3;
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);

    int minNumber, maxNumber;


     if (number1 > number2 && number1 > number3) {
        maxNumber = number1;
    } else if (number2 > number1 && number2 > number3) {
        maxNumber = number2;
    } else {
        maxNumber = number3;
    }

     if (number1 < number2 && number1 < number3) {
        minNumber = number1;
    } else if (number2 < number1 && number2 < number3) {
        minNumber = number2;
    } else {
        minNumber = number3;
    }

    int result = maxNumber - minNumber;

    printf("Razlikata megu maxNumber %d i minNumber %d e %d", maxNumber, minNumber, result);


    return 0;
}
