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


    switch(number)
    {
    case 1:
        printf("WINTER");
        break;
    case 2:
        printf("WINTER");
        break;
    case 3:
        printf("SPRING");
        break;
    case 4:
        printf("SPRING");
        break;
    case 5:
        printf("SPRING");
        break;
    case 6:
        printf("SUMMER");
        break;
    case 7:
        printf("SUMMER");
        break;
    case 8:
        printf("SUMMER");
        break;
    case 9:
        printf("AUTUMN");
        break;
    case 10:
        printf("AUTUMN");
        break;
    case 11:
        printf("AUTUMN");
        break;
    case 12:
        printf("WINTER");
        break;
    default :
        printf("Ste vnese broj nadvor od opsegot!");
        break;
    }

    return 0;
}
