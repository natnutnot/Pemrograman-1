#include <stdio.h>
void main()
{
    int x;
    scanf("%d", &x);
    if (x == 0)
    {
        printf("Nol");
    }
    else if (x > 0 && x < 10)
    {
        printf("Satuan");
    }
    else if (x >= 10 && x < 20)
    {
        printf("Belasan");
    }
    else if (x >= 20 && x < 100)
    {
        printf("Puluhan");
    }
    else
    {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
}