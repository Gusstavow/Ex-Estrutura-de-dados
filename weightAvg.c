#include <stdio.h>

int main()
{

    
    int qtd = 0;
    scanf("%i", &qtd);
    float N[qtd][3], avg[qtd];
    for (int i = 0; i < qtd; i++)
    {
        
        scanf("%f %f %f", &N[i][0], &N[i][1], &N[i][2]);
        
        
    }

    //teste
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < qtd; j++)
    //     {
    //     printf("%.1f ", N[i][j]);
    //     }
    //     printf("\n");
        
    // }
    

    
    for (int i = 0; i < qtd; i++)
    {
        avg[i] = (((N[i][0] * 2) + (N[i][1] * 3) + (N[i][2] * 5)) / (2 + 3 + 5));
        printf("%.1f\n", avg[i]);
    }

    return 0;
}