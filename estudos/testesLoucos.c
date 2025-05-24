#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    int cod;
    int valor;
    struct Lista *prox;
} Lista;

void push(Lista *lista, Lista novoItem)
{
    *lista = novoItem;
    lista->prox = &novoItem;
}

int main()
{

    struct Lista *lista = (Lista *)calloc(3, sizeof(Lista));
    struct Lista item;

    item.cod = 1;
    item.valor = 10;
    item.prox = NULL;

    printf("codigo(%d)\n", item.cod);
    printf("valor(%d)\n", item.valor);
    printf("Prox(%p)\n", item.prox);
    printf("&item(%p)\n", &item);
    printf("TESTE lista\n");
    printf("codigo(%d)\n", lista->cod);
    printf("valor(%d)\n", (*lista).valor);
    printf("PROX>>>>>(%p)\n", (*lista).prox);
    printf("*lista(%d)\n", *lista);
    printf("lista(%p)\n", lista);
    printf("&lista(%p)\n", &lista);

    push(lista, item);

    printf("+++++++DEPOIS DO PUSH +++++++\n");
    printf("item codigo(%d)\n", item.cod);
    printf("item valor(%d)\n", item.valor);
    printf("item prox(%p)\n", item.prox);
    // printf("%d\n", item);
    printf("TESTE lista\n");
    printf("lista codigo(%d)\n", lista->cod);
    printf("lista valor(%d)\n", (*lista).valor);
    printf("lista PROX(%p)\n", (*lista).prox);

    printf("*lista(%d)\n", *lista);
    printf("lista(%p)\n", lista);
    printf("&lista(%p)\n", &lista);

    return 0;
}
