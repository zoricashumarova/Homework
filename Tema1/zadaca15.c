#include <stdio.h>
#include <stdlib.h>

/* 15. Напиши програма каде што преку тастатура ќе може да се внеси еден број (x).
Пронајди го резултатот (y) и отпечати го на екран. */

int main()
{
    int x;
    printf("Vnesi eden broj: \n ");
    scanf("%d", &x);

    float result = (11*pow(x,3)) / 5 + (12 * pow(x,7)) - 3.5 ;
    printf("Rezultatot iznesuva %.2f", result);
    return 0;
}
