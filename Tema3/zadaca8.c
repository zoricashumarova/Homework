#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
8. Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
Ако двата броеви се позитивни да се пресмета квадрат од нивната сума, во
спротивно да се пресмета сума од нивните квадрати.
Резултатот да се отпечати на екран.
*/

int main()
{
    printf("Vnesi dva celi broja!\n");
    int number1, number2;
    scanf("%d", &number1);
    scanf("%d", &number2);

    double result;
    int sum = number1 + number2;

    if(number1 > 0 && number2 > 0) {
        result = pow(sum, 2);
    } else {
        result = pow(number1, 2) + pow(number2, 2);
    }

    printf("Rezultatot e %.2f", result);

    return 0;
}
