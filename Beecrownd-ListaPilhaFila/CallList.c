#include <stdio.h>

#include <string.h>

void Ordenar(char nomes[][100], int count)
{
    char aux[100];
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (strcmp(nomes[j], nomes[j + 1]) > 0)
            {
                strcpy(aux, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], aux);
            }
        }
    }
}

int main()
{

    int n1, n2;

    scanf("%d %d", &n1, &n2);

    char nomes[n1][100];

    for (int i = 0; i < n1; i++)
    {
        scanf("%s", nomes[i]);
    }

    Ordenar(nomes, n1);


    printf("%s\n",nomes[n2 -1]);
     

    return 0;
}
