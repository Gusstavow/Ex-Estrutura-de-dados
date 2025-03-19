#include <stdio.h>

int main()
{
    const int n = 7;
    int n_banknotes[7] = {100, 50, 20, 10, 5, 2, 1};


    unsigned int N;
    int q[6];
   
    //int teste = 0;
    int value = 0;
    scanf("%i", &N);
    value = N;
    

    // for notas
    printf("%i\n", N);
    printf("NOTAS:\n");
    for (int i = 0; i < n; i++)
    {
        q[i] = value / n_banknotes[i];
        value = value - (q[i] * n_banknotes[i]);
        printf("%i nota(s) de R$ %i,00\n", q[i], n_banknotes[i]);
    }
}