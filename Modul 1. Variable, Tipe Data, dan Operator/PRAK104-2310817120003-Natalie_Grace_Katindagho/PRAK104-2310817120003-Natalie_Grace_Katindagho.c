#include <stdio.h>

void main()
{
    int a = 400000;
    int b = 350000;
    float disc_a = 0.13;
    float disc_b = 0.21;
    float harga_disc_a = a * disc_a;
    float harga_disc_b = b * disc_b;
    int harga_akhir_a = a - harga_disc_a;
    int harga_akhir_b = b - harga_disc_b;
    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu B adalah %d\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", harga_akhir_a);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", harga_akhir_b);
}