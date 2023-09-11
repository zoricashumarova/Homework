#include <stdio.h>
#include <stdlib.h>

/* 11. Напиши програма каде што преку тастатура ќе може да се внеси еден број (r).
Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на
екран.
π = 3. 14 (вредноста за пи зачувај ја во променлива pi и искористи ја во формулата */

int main()
{
    int r;
    printf("Vnesi eden broj: \n");
    scanf("%d", &r);

    float pi = 3.14;

    float result = (4*pi*pow(r,3)) / 3;
    printf("Volumenot iznesuva %.2f", result);

    return 0;
}
