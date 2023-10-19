#include <stdio.h>
void main()
{
    char nama[77];
    char nim[77];
    char kelas_paralel[77];
    char ttl[77];
    char alamat[77];
    char hobby[77];
    char no_hp[77];

    printf("Nama                    :");
    gets(nama);
    printf("NIM                     :");
    gets(nim);
    printf("Kelas Paralel           :");
    gets(kelas_paralel);
    printf("Tempat/Tanggal Lahir    :");
    gets(ttl);
    printf("Alamat                  :");
    gets(alamat);
    printf("Hobby                   :");
    gets(hobby);
    printf("No. HP                  :");
    gets(no_hp);

    printf("\nNama                    :%s\n", nama);
    printf("NIM                     :%s\n", nim);
    printf("Kelas Paralel           :%s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir    :%s\n", ttl);
    printf("Alamat                  :%s\n", alamat);
    printf("Hobby                   :%s\n", hobby);
    printf("No. HP                  :%s\n", no_hp);
}