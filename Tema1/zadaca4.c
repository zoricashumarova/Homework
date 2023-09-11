#include <stdio.h>
#include <stdlib.h>

//4. Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(b,h,l), пронајди го волуменот(V) според наведената формула и отпечати го
//резултатот на екран.

int main()
{
    float b,h,l;
    printf("Vnesi 3 broja:\n ");
    scanf("%f", &b);
    scanf("%f", &h);
    scanf("%f", &l);

    float v = (b*h*l) / 2;
    printf("Volumenot iznesuva %.2f", v);


    return 0;
}
