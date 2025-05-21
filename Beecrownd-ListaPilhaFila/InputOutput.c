#include <stdio.h>
#include <stdlib.h>

typedef struct nomes
{

    char nome[31];

} nomes;

void push(nomes *lista, int *count, nomes novoNome)
{
    lista[*count] = novoNome;
    *count = *count + 1;
}

int main()
{

    int count = 0;
    nomes *lista = (nomes *)calloc(10, sizeof(nomes));
    nomes novoNome;
    for (int i = 0; i < 10; i++)
    {

        scanf("%s", novoNome.nome);
        push(lista, &count, novoNome);
    }

    printf("%s\n", lista[2].nome);
    printf("%s\n", lista[6].nome);
    printf("%s\n", lista[8].nome);

    return 0;
}