#include <stdio.h>
void main()
{
    float mengelilingi = 5;
    float keliling = 14;
    float phi = 3.14;
    float tahap_1 = keliling / mengelilingi;
    float tahap_2 = 2 * phi;
    float jari_jari = tahap_1 / tahap_2;
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran\n", mengelilingi);
    printf("Jarak tempuh Pak Dengklek %.f Kilometer\n\n", keliling);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari_jari);
}