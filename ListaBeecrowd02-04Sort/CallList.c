#include <stdio.h>
#include <string.h>

const int qtd = 100;
void funcSortNames(char sortName[][qtd], int n)
{
    char aux[qtd];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
            if (strcmp(sortName[j], sortName[j + 1]) > 0)
            {
                strcpy(aux, sortName[j]);
                strcpy(sortName[j], sortName[j + 1]);
                strcpy(sortName[j + 1], aux);
            }
          
        }
    }
}

int main()
{

    int n = 0;
    int drawn = 0;

    scanf("%d %d", &n, &drawn);
    char names[n][qtd];
    char sortNames[n][qtd];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);

        strcpy(sortNames[i], names[i]);
    }

    funcSortNames(sortNames, n);

    printf("%s\n", sortNames[drawn - 1]);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("TESTE :: ==== %s\n", sortNames[i]);
    // }
    

    return 0;
}