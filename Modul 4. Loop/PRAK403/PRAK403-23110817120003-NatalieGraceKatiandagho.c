#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;

    scanf("%d %d", &x, &y);
    printf("%d %d", x, y);

    if (x < y)
    {
        for (z = 1; z <= y - x; z++)
        {
            printf(" - %d %d ", x + z, y - z);
        }
    }
    else
    {
        for (z = 1; z <= x - y; z++)
        {
            printf(" - %d %d", x - z, y + z);
        }
    }

    return 0;
}
