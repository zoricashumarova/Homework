#include <stdio.h>
#include <stdlib.h>

/* 10. Напиши програма каде што преку тастатура ќе може да се внесат два броеви (r, h).
Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на
екран.
π = 3. 14 (вредноста за пи зачувај ја во променлива pi и искористи ја во формулата */

int main()
{
    int r,h;
    printf("Vnesi dva broja: \n");
    scanf("%d", &r);
    scanf("%d", &h);

    float pi = 3.14;

    float result = pi * pow(r,2) * h;
    printf("Volumenot iznesuva %.2f", result);

    return 0;
}
