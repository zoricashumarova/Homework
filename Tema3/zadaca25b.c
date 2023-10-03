#include <stdio.h>
#include <stdlib.h>

/*
25. Напишете програма каде што ќе може да се внесе број од 1 до 12 и за истиот да се
испечати соодветниот месец во годината
Пр. За внесен број 3, треба да се отпечати “MART”
За внесен број 12, треба да се отпечати “DEKEMVRI”
*/
int main()
{
     printf("Vnesi eden broj!\n");
    int number;
    scanf("%d", &number);

    if (number == 1) {
        printf("JANUARI");
    } else if(number == 2) {
        printf("FEVRUARI");
    } else if (number == 3) {
        printf("MART");
    } else if (number == 4) {
        printf("APRIL");
    } else if (number == 5) {
        printf("MAJ");
    } else if (number == 6) {
        printf("JUNI");
    } else if (number == 7) {
        printf("JULI");
    } else if (number == 8) {
        printf("AVGUST");
    } else if (number == 9) {
        printf("SEPTEMVRI");
    } else if (number == 10) {
        printf("OKTOMVRI");
    } else if (number == 11) {
        printf("NOEMVRI");
    } else if (number == 12) {
        printf("DEKEMVRI");
    } else printf("Ste vnese broj nadvor od opsegot!");

    return 0;
}
