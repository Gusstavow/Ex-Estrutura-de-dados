#include <stdio.h>

int main()
{

    int qtd = 0;
    int aux = 0;

    while (scanf("%d", &qtd) != EOF)
    {
        int num[qtd];
        for (int i = 0; i < qtd; i++)
        {
            scanf("%d", &num[i]);
        }

        for (int i = 0; i < qtd; i++)
        {
            for (int j = 0; j < qtd - 1; j++)
            {
                if(num[j] > num[j+1]){
                    aux = num[j];
                    num[j] = num[j + 1];
                    num[j+ 1] = aux;
                }
            }
        }

        for(int i =0; i < qtd; i++){
            printf("%04d\n", num[i]);
        }
    }

    return 0;
}