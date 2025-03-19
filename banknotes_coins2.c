#include <stdio.h>

int main()
{

    int n_banknotes[6] = {100, 50, 20, 10, 5, 2};

    double n_bankcoins[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    double N;
    int q[6];
    int r;
    //int teste = 0;
    double coins = 0;
    scanf("%lf", &N);
    coins = N;
    

    // for notas
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++)
    {
        q[i] = coins / n_banknotes[i];
        coins = coins - (q[i] * n_banknotes[i]);
        printf("%i nota(s) de R$ %.2f\n", q[i], (float)n_banknotes[i]);
    }

    printf("%lfcoins\n", coins);

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++)
    {

        r = coins / n_bankcoins[i];
        //teste = r;
        coins = coins - (r * n_bankcoins[i]);

        printf("%i moeda(s) de R$ %.2f\n", r, (float)n_bankcoins[i]);
        printf("%lfcoins\n\n\n", coins);
        
    }
    printf("%lfcoins\n", coins);
    
    return 0;
}