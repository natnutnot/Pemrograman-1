#include <stdio.h>

void main()
{
    int batas;
    int x;
    scanf("%d", &batas);

    for (x = 1; x <= batas; x++)
    {
        if (x % 2 != 0)
        {
            printf("%d ", x);
        }
    }

    printf("\n");

    for (x = batas; x > 0; x--)
    {
        if (x % 2 == 0)
        {
            printf("%d ", x);
        }
    }
}