#include <stdio.h>
void main()
{
    int x;
    scanf("%d", &x);

    if (x < 50)
    {
        printf("E");
    }
    else if (x >= 50 && x <= 59)
    {
        printf("D");
    }
    else if (x >= 60 && x <= 69)
    {
        printf("C");
    }
    else if (x >= 70 && x <= 79)
    {
        printf("B");
    }
    else
    {
        printf("A");
    }
}
