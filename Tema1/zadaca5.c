#include <stdio.h>
#include <stdlib.h>

//5. Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(l,w,h), пронајди го волуменот(V) според наведената формула и отпечати го
//резултатот на екран.

int main()
{
    float l,w,h;
    printf("Vnesi 3 broja:\n ");
    scanf("%f", &l);
    scanf("%f", &w);
    scanf("%f", &h);

    float v = l*w*h;
    printf("Volumenot iznesuva %.2f", v);
    return 0;
}
