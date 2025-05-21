#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

typedef struct Lista
{
    int num;
    float valor;
} Lista;

void push(Lista **lista, int *count, Lista newItem, int *qtd)
{

    if (*qtd == *count)
    {
        *qtd = *qtd * 2;
        Lista *temp = (Lista *)realloc(*lista, (*qtd) * sizeof(Lista));
        *lista = temp;
    }
    (*lista)[*count] = newItem;
    *count = *count + 1;
}
int main()
{

    int qtd = 3;
    int count = 0;
    Lista *lista = (Lista *)calloc(3, sizeof(Lista)); // lista eh um ponteiro para o primeiro indice que eh retornado do calloc
    Lista novo;
    printf("===ANTES====%d======= \n", novo.num);
    scanf("%d", &novo.num);
    printf("===DEPOIS====%d======= \n", novo.num);

    push(&lista, &count, novo, &qtd);

    printf("===ANTES====%d======= \n", novo.num);
    scanf("%d", &novo.num);
    printf("===DEPOIS====%d======= \n", novo.num);
    push(&lista, &count, novo, &qtd);

    printf("===VALOR ANTES====%.2f======= \n", novo.valor);
    scanf("%f", &novo.valor);

    printf("===VALOR DEPOIS====%.2f======= \n", novo.valor);
    push(&lista, &count, novo, &qtd);

    for (int i = 0; i < 5; i++)
    {
        printf("==Items da lista[valor]===: %f\n", lista[i].valor);
        printf("-===============-\n");
        printf("Items da lista[num]: %d\n", lista[i].num);
    }

    int i = 0;
    while (1)
    {

        novo.num = i;
        novo.valor = i + 2000;
        push(&lista, &count, novo, &qtd);

        printf("TESTE:-------------------------------------------\a\n");
        printf("==Temp[valor]===: %f\n", lista[i].valor);

        printf("ITemp[num]: %d\n", lista[i].num);
        printf("-===============-\n");
        Sleep(1000);
        i++;
    }

    // for (int i = 0; i < 15; i++)
    // {
    //     printf("TESTE:-------------------------------------------\n");
    //     printf("==Temp[valor]===: %f\n", lista[i].valor);

    //     printf("ITemp[num]: %d\n", lista[i].num);
    //     printf("-===============-\n");
    // }

    return 0;
}