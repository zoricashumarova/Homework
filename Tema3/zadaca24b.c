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

    if (number == 0) {
        printf("NULA");
    } else if(number == 1) {
        printf("EDEN");
    } else if (number == 2) {
        printf("DVA");
    } else if (number == 3) {
        printf("TRI");
    } else if (number == 4) {
        printf("CETIRI");
    } else if (number == 5) {
        printf("PET");
    } else printf("Ste vnese broj nadvor od opsegot!");

    return 0;
}
