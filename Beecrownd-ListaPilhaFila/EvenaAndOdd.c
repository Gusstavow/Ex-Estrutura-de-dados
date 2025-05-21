#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 0;
    int countEven = 0, countOdd = 0;

    
    
        scanf("%d", &n);
        unsigned int num[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
            if (num[i] % 2 == 0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }

        // for para ordenar  os numeros
        int aux;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (num[j] > num[j + 1])
                {
                    aux = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = aux;
                }
            }
        }

        unsigned int even[countEven];

        unsigned int odd[countOdd];

        int indEven = 0, indOdd = 0;
        for (int i = 0; i < n; i++)
        {

            if (num[i] % 2 == 0)
            {
                even[indEven] = num[i];
                indEven++;
            }
            else
            {
                odd[indOdd] = num[i];
                indOdd++;
            }
        }

        // imprimir os numeros
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d ", num[i]);
        // }
        // printf("\n");

        // imprimir numeos impares e pares
        // for (int i = 0; i < n; i++)
        // {

        //     if (i < countEven)
        //     {
        //         printf(" even ===%d\n", even[i]);
        //     }
        //     if (i < countOdd)
        //     {
        //         printf(" odd ====%d\n", odd[i]);
        //     }
        // }

        // zerar as variaveis de indices
        indEven = 0, indOdd = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < countEven)
            {
                num[i] = even[indEven];
                indEven++;
            }
            else
            {
                num[i] = odd[indOdd];
                indOdd++;
            }
        }

        // imprimir o numeors novamente
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", num[i]);
        }
    
    return 0;
}

// 9 7 10 8 4 5 6 1 3 2