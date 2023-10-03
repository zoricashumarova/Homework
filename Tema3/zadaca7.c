#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
7. Напиши програма каде преку тастатура ќе може да се внеси цел број.
Ако бројот е парен да се пресмета неговиот квадрат, во спротивно да се пресмета
неговиот куб.
Резултатот да се отпечати на екран.
*/

int main()
{
    printf("Vnesi cel broj!\n");
    int number;
    scanf("%d", &number);
    double result;

    if(number % 2 == 0) {
        result = pow(number,2);
        printf("Kvadratot na brojot %d iznesuva: %.2f", number, result);
    } else {
        result = pow(number,3);
        printf("Kubot na brojot %d iznesuva: %.2f", number, result);
    }

    return 0;
}
