#include <stdio.h>
#include <stdlib.h>

/* 14. Напиши програма каде што преку тастатура ќе може да се внесат два броеви (a, b).
Пронајди го резултатот (y) и отпечати го на екран. */

int main()
{
    int a,b;
    printf("Vnesi dva broja: \n ");
    scanf("%d", &a);
    scanf("%d", &b);

    float y = ((pow(a,3)) / 5) + ((5*(pow(a,2))) / b) - ((12*b) / (pow(a,4))) + 2.1;
    printf("Rezultatot iznesuva %.2f", y);
    return 0;
}
