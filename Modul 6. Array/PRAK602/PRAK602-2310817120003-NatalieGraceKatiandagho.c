#include <stdio.h>

int main()
{
    int jumlah_ruangan;

    scanf("%d", &jumlah_ruangan);

    int zetsu[jumlah_ruangan];

    for (int i = 0; i < jumlah_ruangan; i++)
    {
        scanf("%d", &zetsu[i]);
        printf("%d ", zetsu[i] *= (i + 1));
    }

    return 0;
}