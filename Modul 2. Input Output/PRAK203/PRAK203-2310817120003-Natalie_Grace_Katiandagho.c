#include <stdio.h>
void main()
{
    float a;
    float b;
    float i;
    float j;
    float x;
    float y;
    float total;
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    total = (a - b) * i / j - (x + y);
    printf("%.3f", total);
}