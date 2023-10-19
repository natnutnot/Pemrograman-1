#include <stdio.h>
#include <math.h>
#define phi 3.142857
int main()
{
    double r, t;
    scanf("%lf %lf", &r, &t);
    double V = phi * pow(r, 2) * t;
    double L = 2 * phi * r * (r + t);
    double K = 2 * phi * r;
    printf("Volume = %.2lf\n", V);
    printf("Luas = %.2lf\n", L);
    printf("Keliling = %.2lf\n", K);
}