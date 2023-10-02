#include <stdio.h>

void main()
{
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;
    int sisa_bagi_a_dibagi_b = a % b;
    int sisa_bagi_x_dibagi_y = x % y;
    int jumlah_sisa_bagi = sisa_bagi_x_dibagi_y + sisa_bagi_a_dibagi_b;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", jumlah_sisa_bagi);
}