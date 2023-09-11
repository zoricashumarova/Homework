#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 19. Напиши програма каде што преку тастатура ќе може да се внесат три броеви
(a,b,x). Да се пресмета изразот и да се отпечати резултатот (y) на екран. */

int main()
{
    int a,b,x;
    printf("Vnesi tri broja\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);

    float y = (pow(a,3) + (2/(x+b))) / sqrt(5*a+pow(b,2));

    printf("Rezultatot iznesuva %.2f", y);
    return 0;
}
