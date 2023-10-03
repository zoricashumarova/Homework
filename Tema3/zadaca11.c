#include <stdio.h>
#include <stdlib.h>

/*
11. Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
Да се отпечати на екран поголемиот од броевите - “Brojot %d e pogolem od brojot
%d”.
*/

int main()
{
    printf("Vnesi dva celi broja!\n");
    int number1, number2;
    scanf("%d", &number1);
    scanf("%d", &number2);

    if(number1 > number2) {
        printf("Brojot %d e pogolem od brojot %d", number1, number2);
    } else {
        printf("Brojot %d e pogolem od brojot %d", number2, number1);
    }
    return 0;
}
