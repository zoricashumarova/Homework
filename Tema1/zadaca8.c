#include <stdio.h>
#include <stdlib.h>

/*8. Напиши програма каде што преку тастатура ќе може да се внесат три броеви
(a, b, h). Пронајди ја плоштината (A) според наведената формула и отпечати го
резултатот на екран. */

int main()
{
    int a,b,h;
    printf("Vnesi 3 broja: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &h);

    int result  = ((a+b)/2)*h;
    printf("Plostinata iznesuva %d", result);
    return 0;
}
