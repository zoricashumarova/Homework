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

    switch(number)
    {
    case 1:
        printf("JANUARI");
        break;
    case 2:
        printf("FEVRUARI");
        break;
    case 3:
        printf("MART");
        break;
    case 4:
        printf("APRIL");
        break;
    case 5:
        printf("MAJ");
        break;
    case 6:
        printf("JUNI");
        break;
    case 7:
        printf("JULI");
        break;
    case 8:
        printf("AVGUST");
        break;
    case 9:
        printf("SEPTEMVRI");
        break;
    case 10:
        printf("OKTOMVRI");
        break;
    case 11:
        printf("NOEMVRI");
        break;
    case 12:
        printf("DEKEMVRI");
        break;
    default :
        printf("Ste vnese broj nadvor od opsegot!");
        break;
    }
    return 0;
}
