#include "stdio.h"

int main()
{
    double v0;

    do
    {
        scanf("%lf", &v0);
    } while (v0 < 0 && v0 > 1000000);

    int v = v0 * 100;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", v / 10000);
    v = v % 10000;
    printf("%d nota(s) de R$ 50.00\n", v / 5000);
    v = v % 5000;
    printf("%d nota(s) de R$ 20.00\n", v / 2000);
    v = v % 2000;
    printf("%d nota(s) de R$ 10.00\n", v / 1000);
    v = v % 1000;
    printf("%d nota(s) de R$ 5.00\n", v / 500);
    v = v % 500;
    printf("%d nota(s) de R$ 2.00\n", v / 200);
    v = v % 200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", v / 100);
    v = v % 100;
    printf("%d moeda(s) de R$ 0.50\n", v / 50);
    v = v % 50;
    printf("%d moeda(s) de R$ 0.25\n", v / 25);
    v = v % 25;
    printf("%d moeda(s) de R$ 0.10\n", v / 10);
    v = v % 10;
    printf("%d moeda(s) de R$ 0.05\n", v / 5);
    v = v % 5;
    printf("%d moeda(s) de R$ 0.01\n", v / 1);

    return 0;
}