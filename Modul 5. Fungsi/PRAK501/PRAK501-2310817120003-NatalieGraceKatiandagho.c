#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d)
{
    int NilaiMaksimal = a;
    if (b > NilaiMaksimal)
    {
        NilaiMaksimal = b;
    }
    if (c > NilaiMaksimal)
    {
        NilaiMaksimal = c;
    }
    if (d > NilaiMaksimal)
    {
        NilaiMaksimal = d;
    }
    return NilaiMaksimal;
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
    return 0;
}
