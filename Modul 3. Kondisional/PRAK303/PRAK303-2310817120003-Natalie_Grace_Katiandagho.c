#include <stdio.h>

void main()
{
    int N;
    scanf("%d", &N);

    if (N > 0)
    {
        printf("positif");
    }
    else if (N == 0)
    {
        printf("nol");
    }
    else
    {
        printf("negatif");
    }
}
