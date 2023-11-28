#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2)
{
    int hitung_total = nilai1 - nilai2;
    if (hitung_total < 0)
    {
        return hitung_total * -1;
    }
}

int mutlak(int angka)
{
    if (angka < 0)
    {
        return -angka;
    }
    return angka;
}

int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);
    int Hasil = hitung(a, b) + hitung(c, d);
    printf("%d", mutlak(Hasil));
    return 0;
}
