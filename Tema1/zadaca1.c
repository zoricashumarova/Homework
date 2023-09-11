#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2;
    printf("Vnesi dva celi broja :\n ");
    scanf("%d", &number1);
    scanf("%d", &number2);

    int total = number1 + number2;
    int result = total % 2 == 0;

    printf("Zbirot na broevite e: %d\n", total);
    printf("Rezultatot e: %d", result);



    return 0;
}
