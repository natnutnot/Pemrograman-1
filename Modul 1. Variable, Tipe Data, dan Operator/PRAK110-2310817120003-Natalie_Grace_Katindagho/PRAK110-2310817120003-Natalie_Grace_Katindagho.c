#include <stdio.h>
#include <math.h>

void main()
{
    int alas = 5;
    int tinggi = 12;
    float luas = 0.5 * alas * tinggi;
    int sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));
    int keliling = alas + tinggi + sisi_miring;
    printf("Diket :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %d cm\n", sisi_miring);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %.f cm\n", luas);
}