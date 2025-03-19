#include <stdio.h>

int main()
{
    const int n1 = 6;    //0,  1,  2,  3,  4, 5
    int n_banknotes[6] = {100, 50, 20, 10, 5, 2};
                          //0,     1,     2,     3,     4,     5
    double n_bankcoins[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    double N;

    double notas_coins;
    int qtdNotas[n1];

    int qtdCoins[n1];

  
    scanf("%lf", &N);

     //double teste = N / 1.0;
    ////teste-- apenas moedas, exceto moeda de 1 real
     //teste = teste - (int)teste;

    // printf("Coins teste %.5f\n", coins);
     //printf("TESTE2 %lf \n", teste);

    // if (N >= nota1)
    // {
    //     notas = N / nota1; // nota1 == 100;
    //     qtdNotas[0] = notas;
    //     N = (notas - (int)notas) * nota1; // nota1 == 100;
    //     printf("TESTE %i\n", qtdNotas[0]);
    //     printf("TESTE2 %.2f\n", N);
    // }

    // if (N >= nota2)
    // {
    //     notas = N / nota2;
    //     qtdNotas[1] = notas;
    //     N = (notas - (int)notas) * nota2;
    //     printf("TESTEqtdNotas[0]: %i\n", qtdNotas[1]);
    //     printf("TESTE2 N: %.2f\n", N);
    // }

    // teste 
    //printf("TESTE2 N / 100: %lf\n", N / 100);
    
    printf("NOTAS:\n");
    for (int i = 0; i < n1; i++)
    {
        notas_coins = N / n_banknotes[i]; 
        qtdNotas[i] = notas_coins;
        N = (notas_coins - (int)notas_coins) * n_banknotes[i]; 
        printf("%i nota(s) de R$ %.2f\n", qtdNotas[i], (float)n_banknotes[i]);
        //printf("TESTE2 N: %.2f\n", N);
    }

    //printf("Teste depois do calculo de NOTAS %lf \n\n\n\n", N);

    printf("MOEDAS:\n");
    for (int i = 0; i < n1; i++)
    {
        notas_coins = N / n_bankcoins[i]; 
        
        qtdCoins[i] = notas_coins;
        N = (notas_coins - (int)notas_coins) * n_bankcoins[i]; 
        printf("%i moeda(s) de R$ %.2lf\n", qtdCoins[i], n_bankcoins[i]);
       // printf("teste NotasCoins %lf  \n\n", notas_coins);
        //printf("TESTE2 N: %lf\n", N);
    }
     

    // printf("NOTAS\n");
    // printf("%i nota(s) de R$ 100,00\n", ;
    // printf("%i nota(s) de R$ 50,00\n", ;
    // printf("%i nota(s) de R$ 20,00\n", ;
    // printf("%i nota(s) de R$ 10,00\n", ;
    // printf("%i nota(s) de R$ 5,00\n", ;
    // printf("%i nota(s) de R$ 2,00\n", ;

    // printf("MOEDAS:\n");
    // printf("%i moeda(s) de R$ 1.00\n", c1);
    // printf("%i moeda(s) de R$ 0.50\n", c050);
    // printf("%i moeda(s) de R$ 0.25\n", c025);
    // printf("%i moeda(s) de R$ 0.10\n", c010);
    // printf("%i moeda(s) de R$ 0.05\n", c005);
    // printf("%i moeda(s) de R$ 0.01\n", c001);

    return 0;
}