#include <stdio.h>

int abs(int n1, int n2)
{
    int res = 0;
    res = n1 - n2;
    if (res < 0)
    {
        return res * -1;
    }
    else
    {
        return res;
    }
}

int main()
{

    const int carX = 60, carY = 90;
    const int dif_KmH = abs(carX, carY);
    const int km_min = 60 / dif_KmH;
    int in_km = 0;
    int out_min = 0;
    scanf("%i", &in_km);
    out_min = km_min * in_km;
    printf(" %i %i %i %i\n", carX, carY, dif_KmH, km_min);
    printf("%i minutos\n", out_min);

    return 0;
}