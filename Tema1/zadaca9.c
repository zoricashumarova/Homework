#include <stdio.h>
#include <stdlib.h>

/* 9. Напиши програма каде што преку тастатура ќе може да се внеси еден бројј (r).
Пронајди ја плоштината (C) според наведената формула и отпечати го резултатот
на екран.
π = 3. 14 (вредноста за пи зачувај ја во променлива pi и искористи ја во формулата */

int main()
{
    int r;
    printf("Vnesi broj: \n");
    scanf("%d", &r);

    float pi = 3.14;

    float c =  2 * pi * r;
    printf("Plostinata iznesuva %.2f", c);

    return 0;
}
