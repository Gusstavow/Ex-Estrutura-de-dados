#include <stdio.h>
#include <stdlib.h>

typedef struct Item
{
    int cod;
    float valor;
    struct Item *prox;
} Item;

void Imprimir(Item *coisa)
{
    while (coisa != NULL)
    {
        printf("cod: %d VALOR: %.2f\n", coisa->cod, coisa->valor);
        coisa = coisa->prox;
    }
}

Item *push(Item *head, int novoCod, float novoValor)
{
    
    Item *novoItem = (Item *)malloc(sizeof(Item));
    novoItem->cod = novoCod;
    novoItem->valor = novoValor;
    novoItem->prox = head;
    return novoItem;
}

Item* pop(Item *head) {
    if (head == NULL) {
        // A lista está vazia, não há nada para remover
        return NULL;
    }

    Item *temp = head;     // Guarda o ponteiro para o primeiro item
    head = head->prox;     // A cabeça da lista agora aponta para o segundo item
    free(temp);            // Libera a memória do antigo primeiro item

    return head;           // Retorna a nova cabeça da lista
}

int main()
{

     Item *lista = NULL;

    // Adicionando alguns itens
    lista = push(lista, 1, 2.99);
    lista = push(lista, 2, 3.99);
    lista = push(lista, 3, 5.99);

    printf("Lista antes do pop:\n");
    Imprimir(lista);

    // Removendo o primeiro item (doce)
    lista = pop(lista);
    printf("\nLista após o primeiro pop:\n");
    Imprimir(lista);

    // Removendo o próximo item (batata)
    lista = pop(lista);
    printf("\nLista após o segundo pop:\n");
    Imprimir(lista);

    // Removendo o último item (refri)
    lista = pop(lista);
    printf("\nLista após o terceiro pop:\n");
    Imprimir(lista);

    // Tentando remover de uma lista vazia
    lista = pop(lista);
    printf("\nLista após o quarto pop (lista vazia):\n");
    Imprimir(lista);

    return 0;

    
}