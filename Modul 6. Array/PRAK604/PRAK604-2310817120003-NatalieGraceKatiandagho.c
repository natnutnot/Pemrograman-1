#include <stdio.h>
#include <string.h>

int main()
{
    char kode[100];
    char pesan[100];
    int i;
    int bintang = 0;
    int pagar = 0;

    scanf(" %[^\n]", kode);
    scanf(" %[^\n]", pesan);

    int panjangKode = strlen(kode);
    int panjangPesan = strlen(pesan);

    if (panjangKode != panjangPesan)
    {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    for (int i = 0; i < panjangKode; i++)
    {
        if (kode[i] == ' ' && pesan[i] == ' ')
        {
            pesan[i] = ' ';
        }
        else if (kode[i] == pesan[i])
        {
            pesan[i] = '*';
        }
        else
        {
            pesan[i] = '#';
        }
    }

    for (int i = 0; i < panjangKode; i++)
    {
        if (pesan[i] == '*')
        {
            bintang++;
        }
        else if (pesan[i] == '#')
        {
            pagar++;
        }
    }

    printf("%s\n", pesan);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if (bintang >= pagar)
    {
        printf("Pesan asli\n");
    }
    else
    {
        printf("Pesan palsu\n");
    }

    return 0;
}