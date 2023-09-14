#include <stdio.h>
#include <stdlib.h>

/* 4. Напиши програма која преку тастатура ќе овозможува да се внесат две
променливи x и y.
Доделија поголемата вредност од x или y на променлива наречена maxValue и
прикажи го резултатот на екран. (реши ја задачата со помош на тернарен опратор) */

int main()
{
    int x,y;

    printf("Vnesi dva broja: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    int maxValue;

    x > y ? (maxValue = x) : (maxValue = y);
    printf("Maxvalue is %d", maxValue);

    return 0;
}
