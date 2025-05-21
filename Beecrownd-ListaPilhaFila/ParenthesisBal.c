#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pilha
{
    char paren;
} Pilha;

void Push(Pilha *pilha, int *count, Pilha novoItem)
{
    pilha[*count] = novoItem;
    *count = *count + 1;
}

void Pop(Pilha *pilha, int *count)
{
    // pilha[*count - 1].paren = '\0';
    *count = *count - 1;
}

int EstaVazia(int count)
{
    // Se estiver vaiza recebe 1
    // se NAO estiver recebe 0
    if (count == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

    char string[1000];

    while (scanf("%s", string) != EOF)
    {
        int estaCerto = 1; // 1 correto
        int count = 0;
        int qtd = strlen(string);

        Pilha *pilha = (Pilha *)calloc(qtd, sizeof(Pilha));
        Pilha novoItem;

        for (int i = 0; i < qtd; i++)

        {
            if (string[i] == 40)
            {
                novoItem.paren = string[i];
                Push(pilha, &count, novoItem);
            }
            else if (string[i] == 41)
            {
                if (EstaVazia(count) == 1)
                {

                    estaCerto = 0;
                    break;
                }
                else
                {
                    Pop(pilha, &count);
                }
            }
        }

        if (!EstaVazia(count) && estaCerto)
        {
            estaCerto = 0;
        }

        if (estaCerto)
        {
            printf("correct\n");
        }
        else
        {
            printf("incorrect\n");
        }

        free(pilha);
    }

    // printf("%c", pilha[0]);
    // printf("%c", pilha[1]);
    // printf("%c", pilha[2]);

    return 0;
}