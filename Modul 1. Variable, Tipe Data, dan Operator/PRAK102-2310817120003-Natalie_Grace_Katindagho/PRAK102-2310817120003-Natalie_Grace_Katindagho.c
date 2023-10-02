#include <stdio.h>

void main()
{
    int a = 4;
    int b = 8;
    int c = 3;
    float total_1 = a * b;
    float total_akhir = total_1 / c;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Hasil dari a dikali b dibagi c adalah %.6f", total_akhir);
}