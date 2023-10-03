#include <stdio.h>
#include <stdlib.h>

/*
26. Напишете програма каде што ќе може да се внесе број од 1 до 12 кој ќе
претставува месец од годината. За внесениот месец треба да се отпечати
соодветното годишно време.

Пр. За внесен број 3, треба да се отпечати “SPRING”
За внесен број 12, треба да се отпечати “WINTER”
** Зима е за месеците декември, јануари, фебруари
** Пролет е за месеците март, април, мај
** Лето е за месеците јуни, јули, август
** Есен е за месеците септември, октомври, ноември
*/

int main()
{
    printf("Vnesi eden broj!\n");
    int number;
    scanf("%d", &number);


    if (number == 1) {
        printf("WINTER");
    } else if(number == 2) {
        printf("WINTER");
    } else if (number == 3) {
        printf("SPRING");
    } else if (number == 4) {
        printf("SPRING");
    } else if (number == 5) {
        printf("SPRING");
    } else if (number == 6) {
        printf("SUMMER");
    } else if (number == 7) {
        printf("SUMMER");
    } else if (number == 8) {
        printf("SUMMER");
    } else if (number == 9) {
        printf("AUTUMN");
    } else if (number == 10) {
        printf("AUTUMN");
    } else if (number == 11) {
        printf("AUTUMN");
    } else if (number == 12) {
        printf("WINTER");
    } else printf("Ste vnese broj nadvor od opsegot!");

    return 0;
}
