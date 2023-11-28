#include <stdio.h>

void Biodata(int tahunLahir, char *nama, char *asal)
{
    int tahunSekarang = 2020;
    printf("Perkenalkan Nama Saya: %s\n", nama);

    int usia = tahunSekarang - tahunLahir;
    printf("Umur Saya: %d tahun\n", usia);
    printf("Saya Adalah Angkatan : %d \n", tahunSekarang);
    printf("Asal Saya dari: %s\n", asal);
}

int main()
{
    int tahunLahir;
    char Namaku[20], Asal[15];

    scanf("%d", &tahunLahir);
    scanf(" %[^\n]%*c", Namaku);
    scanf(" %[^\n]%*c", Asal);

    Biodata(tahunLahir, Namaku, Asal);

    return 0;
}
