#include <stdio.h>
#include <stdlib.h>


/* 5. Напиши програма која преку тастатура ќе овозможува да се внесат две
променливи x и y.
Доделија апсолутната разлика помеѓу променливите a и b на променлива наречена
absDif и прикажи го резултатот на екран. (реши ја задачата со помош на тернарен
опратор). */

int main()
{
    int x, y;

    printf("Vnesi dva broja: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    int absDif;

    x < y ?  (absDif = abs(x-y)) : (absDif = abs(y-x));

    printf("%d", absDif);

    return 0;
}
