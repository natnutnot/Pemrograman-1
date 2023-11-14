#include <stdio.h>

void main()
{
    int x;
    int y;
    int perkalian;
    int total1 = 0;
    int total2 = 0;
    int a;
    int b;

    scanf("%d %d", &x, &y);

    for (a = 1; a <= x; a++)
    {
        perkalian = a * y;
        total1 += perkalian;
        if (a > 1)
        {
            for (b = a; b >= 1; b--)
            {
                printf("(%d * %d)", b, y);
                if (b > 1)
                {
                    printf(" + ");
                }
            }
            printf(" = %d \n", total1);
        }
        else if (a == 1)
        {
            printf("(%d * %d) = %d \n", a, y, perkalian);
        }
        total2 += total1;
    }
    printf("%d", total2);
}
