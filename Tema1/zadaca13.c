#include <stdio.h>
#include <stdlib.h>

/* 13. Напиши програма каде што преку тастатура ќе може дасе внесат два броеви (b, h).
Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот
на екран. */

int main()
{
    int b,h;
    printf("Vnesi dva broja: \n");
    scanf("%d", &b);
    scanf("%d", &h);

    float result = (b*h)/2;
    printf("Volumenot iznesuva %.2f", result);
    return 0;
}
