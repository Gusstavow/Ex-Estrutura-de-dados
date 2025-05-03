#include <stdio.h>

void imprimir(int lista[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", lista[i]);
    }
}
int main()
{
    const int n = 10;
    int lista[n];
    int aux = 0;
    int i = 0;
    int temp;
    

    // int listaOrd[n];

    do
    {
        scanf("%d", &temp);
        if (temp > 0)
        {   
            lista[i] = temp;
            i++;
        }
        else if (temp == -1)
        {
            i--;
            for (int j = 0; j < n - 1; j++)
            {
                lista[j] = lista[j + 1];
            }
        }
        else if (temp == -2)
        {
            imprimir(lista, i);
        }

    } while (i < 10);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (lista[j] > lista[j + 1])
            {
                aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
                printf("trocando o valor %d do %d indice para o %d indice\n", lista[j], j, j + 1);
            }
        }
    }
    printf("Lista Ordenada\n");
    imprimir(lista, n);
    return 0;
}