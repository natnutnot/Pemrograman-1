#include <stdio.h>

void main()
{
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;
    float total_1 = a + b;
    float total_2 = total_1 * x;
    float total_akhir = total_2 / y;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f", total_akhir);
}