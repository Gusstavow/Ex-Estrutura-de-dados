#include <stdio.h>

int main()
{

    int n_banknotes[6] = {100, 50, 20, 10, 5, 2};

    
    int n_bankcoins[6] = {100, 50, 25, 10, 5, 1};

    double N;
    int q[6];
    int r;
    //int teste = 0;
    int resto = 0;
    scanf("%lf", &N);
    resto = (N * 100) ;
    
    //printf("TESTE RESTO: %i\n", resto);
    // for notas
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++)
    {
        q[i] = resto / (n_banknotes[i] *100);
        resto = resto % (n_banknotes[i] * 100);
        printf("%i nota(s) de R$ %.2f\n", q[i], (float)n_banknotes[i]);
    }

    //printf("%icoins\n", resto);

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++)
    {

        r = resto / (n_bankcoins[i]);
        //teste = r;
        resto = resto % n_bankcoins[i] ;

        printf("%i moeda(s) de R$ %.2f\n", r, (float)n_bankcoins[i]/100);
        //printf("%lfcoins\n\n\n", resto);
        
    }
    //printf("%icoins\n", resto);
    
    return 0;
}