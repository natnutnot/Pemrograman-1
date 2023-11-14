#include <stdio.h>

void main()
{
    int kelipatan;
    int x;
    char MauApa;

    scanf("%d %c", &kelipatan, &MauApa);

    for (x = 1; x < 51; x++)
    {
        if (x % kelipatan == 0)
        {
            printf("%c ", MauApa);
        }
        else
        {
            printf("%d ", x);
        }
    }
}