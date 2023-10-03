#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
10. Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
Ако првиот број е делив со 8 или вториот број завршува на 4 да се пресмета
нивната сума, во спротивно да се пресмета сума од нивните корени.
Резултатот да се отпечати на екран.
*/

int main()
{
    printf("Vnesi dva celi broja!\n");
    int number1, number2;
    scanf("%d", &number1);
    scanf("%d", &number2);

    double result;

    if (number1 % 8 == 0 || number2 % 10 == 4) {
        result = number1 + number2;
    } else {
        result = sqrt(number1) + sqrt(number2);
    }

    printf("Rezultatot iznesuva: %.2f", result);

    return 0;
}
