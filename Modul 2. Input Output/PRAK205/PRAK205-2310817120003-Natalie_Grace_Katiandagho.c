#include <stdio.h>
#include <math.h>
void main()
{
    float a;
    float b;

    scanf("%f %f", &a, &b);
    float c = sqrt(b * b - a * a);
    float K = a + b + c;
    float L = a * c / 2;
    printf("Alas = %.0f cm\n", c);
    printf("Tinggi = %.0f cm\n", a);
    printf("Keliling = %.0f cm\n", K);
    printf("Luas = %.0f cm^2\n", L);
}