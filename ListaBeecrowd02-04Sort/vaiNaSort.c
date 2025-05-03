#include <stdio.h>

void res(int qtd, int vet[qtd])
{

    for (int i = 0; i < qtd; i++)
    {
        vet[i] = i + 1;
    }
}
int main()
{

    int n = 0, qtd = 0, erros = 0, count = 0;
    int stop = 0;
    while (scanf("%d", &qtd) != EOF && qtd >=2)
    {
        erros = 0;
        count = 0;
        int vet[qtd];
        int inputs[qtd];
        res(qtd, vet);

        while (stop == 0)
        {
            for (int i = 0; i < qtd; i++)
            {
                scanf("%d", &inputs[i]);
            }

            for (int i = 0; i < qtd; i++)
            {
                if (inputs[i] != vet[i])
                {
                    //printf(" NAO INGUAL!!\n");
                    erros++;
                    break;
                }
                // printf("%d input teste \n", inputs[i]);
            }
            if (erros > 0)
            {
                count++;
            }
            if (erros == 0)
            {
                printf("%d\n", ++count);
                stop = 1;
            }
            erros = 0;
        }
        stop = 0;
    }

    return 0;
}
