#include <stdio.h>

void main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);

    if (a < b)
    {
        printf("\n%d %d", a, b);
    }
    else
    {
        printf("\n%d %d", b, a);
    }
}
