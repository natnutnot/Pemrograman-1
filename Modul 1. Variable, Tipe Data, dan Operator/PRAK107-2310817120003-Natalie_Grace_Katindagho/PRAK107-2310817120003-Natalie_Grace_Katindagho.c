#include <stdio.h>
void main()
{
    int a = 4;
    int b = 5;
    int c = 7;
    int biaya_per_meter = 85000;
    int keliling = a + b + c;
    int total_biaya = keliling * biaya_per_meter;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga secara berturut-turut adalah %d,%d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", total_biaya);
}