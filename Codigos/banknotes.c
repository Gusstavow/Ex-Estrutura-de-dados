#include <stdio.h>

int main()
{

    unsigned int N = 0;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    scanf("%i", &N);

    n100 = N / 100;
    n50 = (N % 100) / 50;
    n20 = ((N % 100) % 50) / 20;
    n10 = (((N % 100) % 50) % 20) / 10;
    n5 = ((((N % 100) % 50) % 20) % 10) / 5;
    n2 = (((((N % 100) % 50) % 20) % 10) % 5) / 2;
    n1 = ((((((N % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    printf("%i\n", N);
    printf("%i nota(s) de R$ 100,00\n", n100);
    printf("%i nota(s) de R$ 50,00\n", n50);
    printf("%i nota(s) de R$ 20,00\n", n20);
    printf("%i nota(s) de R$ 10,00\n", n10);
    printf("%i nota(s) de R$ 5,00\n", n5);
    printf("%i nota(s) de R$ 2,00\n", n2);
    printf("%i nota(s) de R$ 1,00\n", n1);
    // printf("Teste %i", n100);
    return 0;
}
