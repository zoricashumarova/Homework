#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 18. Напиши програма каде што преку тастатура ќе може да се внесат три броеви
(a,b,x). Да се пресмета изразот и да се отпечати резултатот (y) на екран. */

int main()
{
    int a,b,x;
    printf("Vnesi tri broja\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);

    float y = pow((pow(a,4) + 7*a*pow(b,3)*pow(x,2)), 2) / sqrt(pow(x,a));

    printf("Rezultatot iznesuva %.2f", y);
    return 0;
}
