#include <stdio.h>
#include <stdlib.h>

/*
24. Да се напиши програма каде ќе биде внесен број преку тастатура (а е [0,5]) и
бројот соодветно треба да се отпечати со букви.
Пр. За внесен број 1, треба да се отпечати “EDEN”
За внесен број 4, треба да се отпечати “CETIRI”
*/

int main()
{
    printf("Vnesi eden broj!\n");
    int number;
    scanf("%d", &number);

    switch(number)
    {
    case 0:
        printf("NULA");
        break;
    case 1:
        printf("EDEN");
        break;
    case 2:
        printf("DVA");
        break;
    case 3:
        printf("TRI");
        break;
    case 4:
        printf("CETIRI");
        break;
    case 5:
        printf("PET");
        break;
    default :
        printf("Ste vnese broj nadvor od opsegot!");
        break;
    }

    return 0;
}
