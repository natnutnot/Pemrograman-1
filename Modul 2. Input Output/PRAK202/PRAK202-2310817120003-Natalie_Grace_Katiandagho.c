#include <stdio.h>
void main()
{
    float a;
    float b;
    float total;

    printf("Masukkan Nilai Pertama :");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua :");
    scanf("%f", &b);

    total = a + b;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", a, b, total);
}