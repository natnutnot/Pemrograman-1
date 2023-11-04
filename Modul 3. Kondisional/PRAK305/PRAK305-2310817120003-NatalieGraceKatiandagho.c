#include <stdio.h>

void main()
{
    int detik;
    int detik2;
    int menit;
    int jam;
    int hari;

    scanf("%d", &detik);

    hari = detik / (24 * 3600);
    jam = (detik % (24 * 3600)) / 3600;
    menit = (detik % 3600) / 60;
    detik2 = detik % 60;

    if (detik >= 0 && detik < 61)
    {
        printf("00:00:%02d", detik);
    }
    else if (detik >= 60 && detik < 3600)
    {
        printf("00:%02d:%02d", menit, detik2);
    }
    else if (detik >= 3600 && detik < 86400)
    {
        printf("%02d:%02d:%02d", jam, menit, detik2);
    }
    else if (detik >= 86400)
    {
        printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik2);
    }
}
