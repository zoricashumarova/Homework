#include <stdio.h>
#include <stdlib.h>

//7. Напиши програма каде што преку тастатура ќе може да се внесат два броеви (b, h).
//Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот
//на екран.

int main()
{
    int b,h;
    printf("Vnesi dva broja: \n");
    scanf("%d", &b);
    scanf("%d", &h);

    int a = b*h;
    printf("Plostinata iznesuva: %d", a);
    return 0;
}
