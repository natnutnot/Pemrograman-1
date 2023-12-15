#include <stdio.h>

int main()
{
    int n1;
    int n2;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2)
    {
        printf("Jumlah tidak sama\n");
    }
    else
    {
        int x[n1];
        int y[n2];

        for (int i = 0; i < n1; i++)
        {
            scanf("%d", &x[i]);
        }

        for (int i = 0; i < n2; i++)
        {
            scanf("%d", &y[i]);
        }

        for (int i = 0; i < n1; i++)
        {
            printf("%d ", x[i] * y[i]);
        }
        printf("\n");
    }

    return 0;
}
