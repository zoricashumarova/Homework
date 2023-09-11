#include <stdio.h>
#include <stdlib.h>

/* 16. Напиши програма каде што преку тастатура ќе може да се внесат три броеви
(a,x,z). Да се пресмета изразот и да се отпечати резултатот (y) на екран. */

int main()
{
    int a,x,z;
    printf("Vnesi 3 broja: \n");
    scanf("%d", &a);
    scanf("%d", &x);
    scanf("%d", &z);

    int result  = (11*(pow(a,2)/pow(a,3))) + ((pow(x,3) / sqrt(9*x + 0.5)));
    return 0;
}
