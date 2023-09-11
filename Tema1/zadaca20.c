#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 20. Напиши програма каде што преку тастатура ќе може да се внесат два броеви
(a,b,x). Да се пресмета изразот и да се отпечати резултатот (y) на екран. */

int main()
{
    int a,b,x;
    printf("Vnesi tri broja\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);

    float y = sqrt((pow(a,2)+3) / (1+(pow(b,3)/a))) / ((a/pow(b,4)) + sqrt(1/(a+b)));

    printf("Rezultatot iznesuva %.2f", y);
    return 0;
}
