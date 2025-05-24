#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    int cod;
    int valor;
    struct Lista *prox;
} Lista;

void push(int cod, int valor, Lista **headAtual)
{
    Lista *novoItem = (Lista *)malloc(sizeof(Lista));
    novoItem->cod = cod;
    novoItem->valor = valor;
    novoItem->prox = *headAtual;
    *headAtual = novoItem;
    //printf("NOVOITEM: %p\n", novoItem);
}

void Imprimir(Lista *head)
{
    while (head != NULL)
    {
        printf("item1 cod: %d\n", head->cod);
        printf("item1 valor: %d\n", head->valor);
        printf("item1 prox: %p\n", (void *)head->prox);

        // printf("item2: %d\n", head->cod);
        // printf("item2: %d\n", head->valor);
        // printf("item2: %p\n", (void *)head->prox);

        printf("teste %p\n", (void *)head);
        head = head->prox;
    }
}
int main()
{
    Lista *head = NULL;
    //printf("HEAD _> : %p\n", head);
    push(1, 10, &head);
    //printf("HEAD _> : %p\n", head);
    push(2, 30, &head);
    //printf("HEAD _> : %p\n", head);
    
    push(3, 100, &head);
   // printf("HEAD _> : %p\n", head);
   
    Imprimir(head);
    // Lista *item1 = (Lista *)malloc(sizeof(Lista));

    // item1->cod = 1;
    // item1->valor = 10;
    // item1->prox = head;

    // head = item1; // head aponta para o endereco de item1(onde o &item1 "mora")

    // Lista *item2 = (Lista *)malloc(sizeof(Lista));
    // item2->cod = 2;
    // item2->valor = 20;
    // item2->prox = head;

    // head = item2;

    return 0;
}