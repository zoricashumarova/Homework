#include <stdio.h>
#include <stdlib.h>

/*
18. Напиши програма каде ќе се внеси еден број преку тастатура и ќе се провери дали
цифрата на единици е поголема од 4. Резултатот да се отпечати на екран.
*/

int main()
{
    printf("Vnesi eden broj\n");
    int number;
    scanf("%d", &number);

    int edinici = number % 10;

    if(edinici > 4) {
        printf("Uslovot e tocno ispolnet");
    } else printf("Uslovot ne e tocno ispolnet");

    return 0;
}
