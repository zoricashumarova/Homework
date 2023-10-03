#include <stdio.h>
#include <stdlib.h>

/*
21. Напиши програма каде преку тастатура ќе биде внесен еден број и за него ќе се
провери дали цифрите на единици, десетки и стотки се еднакви. Резултатот да се
отпечати на екран.
*/

int main()
{
    printf("Vnese eden broj\n");
    int number;
    scanf("%d", &number);

    int edinici = number % 10;
    int desetki = (number / 10) % 10;
    int stotki = number / 100;

    if (edinici == desetki && edinici == stotki && desetki == stotki) {
        printf("Uslovot e zadovolen");
    } else printf("Uslovot ne e zadovolen");

    return 0;
}
