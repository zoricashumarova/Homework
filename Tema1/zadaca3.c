#include <stdio.h>
#include <stdlib.h>

//3. Напиши програма каде што преку тастатура ќе може да се внеси цел број. Провери
//дали бројот е непарен и е делив со 17. Резултатот отпечати го на екран.

int main()
{
    int number;
    printf("Vnesi eden cel broj: ");
    scanf("%d", &number);

    int result = number % 2 != 0 && number % 17 == 0;

    printf("Rezultatot e: %d ", result);
    return 0;
}
