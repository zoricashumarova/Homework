#include <stdio.h>
#include <stdlib.h>

//1. Напиши програма каде што преку тастатура ќе може да се внесат два цели броеви. 
//Пронајди го збирот на броевите и провери дали збирот е парен број. 
//Резултатот отпечати го на екран.

int main()
{
    int number1, number2;
    printf("Vnesi dva celi broja :\n ");
    scanf("%d", &number1);
    scanf("%d", &number2);

    int total = number1 + number2;
    int result = total % 2 == 0;

    printf("Zbirot na broevite e: %d\n", total);
    printf("Rezultatot e: %d", result);



    return 0;
}
