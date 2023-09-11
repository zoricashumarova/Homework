#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//6. Напиши програма каде што преку тастатура ќе може да се внеси еден број (а).
//Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот
//на екран.

int main()
{
    int a;
    printf("Vnesi eden broj: \n");
    scanf("%d", &a);

    float result = ( sqrt(3) * pow(a,2) ) / 4;

    printf("Rezultatot e %.2f", result);

    return 0;
}
