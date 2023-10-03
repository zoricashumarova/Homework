#include <stdio.h>
#include <stdlib.h>

/*
23. Напиши програма каде преку тастатура ќе биде внесен еден број и за него ќе се
провери дали производот на последните три цифри од бројот е парен. Резултатот
да се отпечати на екран.
*/

int main()
{
    printf("Vnese eden broj\n");
    int number;
    scanf("%d", &number);

    int edinici = number % 10;
    int desetki = (number / 10) % 10;
    int stotki = number / 100;
    int result = edinici * desetki * stotki;

    if(result % 2 == 0) {
         printf("Uslovot e zadovolen");
    } else printf("Uslovot ne e zadovolen");

    return 0;
}
