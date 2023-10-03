#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
9. Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
Ако двата броеви се се деливи со 3 да се пресмета корен од нивниот производ, во
спротивно да се пресмета сума од нивните корени.
Резултатот да се отпечати на екран.
*/

int main()
{
    printf("Vnesi dva celi broja!\n");
    int number1, number2;
    scanf("%d", &number1);
    scanf("%d", &number2);

    double result;

    if (number1 % 3 == 0 && number2 % 3 == 0) {
        result = sqrt(number1 * number2);
    } else {
        result = sqrt(number1) + sqrt(number2);
    }

    printf("Rezultatot iznesuva: %.2f", result);

    return 0;
}
