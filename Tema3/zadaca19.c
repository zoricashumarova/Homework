#include <stdio.h>
#include <stdlib.h>

/*
19. Напиши програма каде ќе се внеси еден број преку тастатура и ќе се провери дали
цифрата на единици е еднаква со цифрата на десетки. Резултатот да се отпечати
на екран.
*/

int main()
{
    printf("Vnesi eden broj\n");
    int number;
    scanf("%d", &number);

    int edinici = number % 10;
    int desetki = (number / 10) % 10;

    if(edinici == desetki) {
        printf("Uslovot e tocno ispolnet");
    } else {
        printf("Uslovot ne e tocno ispolnet");
    }


    return 0;
}
