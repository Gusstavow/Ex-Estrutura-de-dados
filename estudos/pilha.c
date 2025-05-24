#include <stdio.h>
#include <stdlib.h>

typedef struct Pilha
{
    int cod;
    float valor;
    struct Pilha *prox;

} Pilha;

void Imprimir(Pilha *head)
{
    printf("Imprimindo...\n");
    while (head != NULL)
    {
        printf("Cod: %d \n", head->cod);
        printf("Valor: %.2f \n", head->valor);
        head = head->prox;
    }
}

void push(Pilha **head, int cod, float valor)
{

    Pilha *novoItem = (Pilha *)malloc(sizeof(Pilha));
    novoItem->cod = cod;
    novoItem->valor = valor;
    novoItem->prox = *head;
    *head = novoItem;
    //(*head)->prox = *head;
}

void Pop(Pilha **head)
{
    printf("fazendo Pop...\n");
    Pilha *temp = *head;
    *head = (*head)->prox;
    free(temp);
}
int main()
{

    Pilha *head = NULL;
    // Pilha *novoItem;

    push(&head, 1, 10.5);
    push(&head, 2, 16.5);
    Imprimir(head);
    Pop(&head);
    push(&head, 3, 29.56);
    push(&head, 4, 47.58);
    Pop(&head);
    Imprimir(head);

    return 0;
}