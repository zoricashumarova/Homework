#include <stdio.h>
#include <stdlib.h>

/* 12. Напиши програма каде што преку тастатура ќе може да се внесе еден број (s).
Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на
екран. */

int main()
{
    int s;
    printf("Vnesi eden broj: \n");
    scanf("%d", &s);

    float result = pow(s,3);
    printf("Volumenot iznesuva %.2f", result);
    return 0;
}
