#include <stdio.h>

void main()
{
    float x;
    float y;
    float hasil;
    char pilihan;

    while (1)
    {
        printf("\nPilih program:\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan: ");
        scanf(" %d", &pilihan);

        if (pilihan == 5)
        {
            printf("Terimakasih, telah menggunakan kalkulator Natalie Grace Katiandagho\n");
            break;
        }
        else if (pilihan >= 1 && pilihan <= 4)
        {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &x);

            printf("Masukkan nilai kedua: ");
            scanf("%f", &y);

            if (pilihan == 1)
            {
                hasil = x + y;
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", x, y, hasil);
            }
            else if (pilihan == 2)
            {
                hasil = x - y;
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", x, y, hasil);
            }
            else if (pilihan == 3)
            {
                hasil = x * y;
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", x, y, hasil);
            }
            else if (pilihan == 4)
            {
                if (y != 0)
                {
                    hasil = x / y;
                    printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", x, y, hasil);
                }
            }
        }
        else
        {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }
}