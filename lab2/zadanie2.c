#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int k, m;
    float x, y, z;

    printf("Podaj x: ");
    scanf("%f", &x);
    printf("Podaj y: ");
    scanf("%f", &y);
    printf("Podaj z: ");
    scanf("%f", &z);
    printf("Podaj k: ");
    scanf("%d", &k);
    printf("Podaj m: ");
    scanf("%d", &m);

    float w1 = (pow(((x) / (y*z)), (1. / 3)))*(log((x*x) + (y*y)));
    printf("w1 = %.8lf\n", w1);

    float w2 = sin((k)*(x / 2))*cos(m*y) + y * exp((2 * x) - 1);
    printf("w2 = %.8lf\n", w2);

    float w3 = abs((x) / ((2 * (y*y)) + 1)) + sqrt((y) / ((z*z) + 3)) + 5 * (pow((y + z), 3));
    printf("w3 = %.8lf\n", w3);

    float w4 = ((x) / (y*z))*(pow((z + 1), 1. / 3)) + (pow(((x*x) + (z*z) + 1), (1. / k))) - abs(y);
    printf("w4 = %.8lf\n", w4);

    float w5 = (1) / (sqrt((x*x) + (y*y) + (k*k))) + (1 / x)*sin(k*y);
    printf("w5 = %.8lf\n", w5);


    return 0;
}
