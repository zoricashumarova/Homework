#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 17. Напиши програма каде што преку тастатура ќе може да се внесат два броеви (a,x).
Да се пресмета изразот и да се отпечати резултатот (y) на екран. */

int main()
{
    int a,x;
    printf("Vnesi dva broja\n");
    scanf("%d", &a);
    scanf("%d", &x);

    float y = sqrt((pow(a,x) + 2*pow(x,3)) / ((5*a)/x));

    printf("Rezultatot iznesuva %.2f", y);
    return 0;
}
