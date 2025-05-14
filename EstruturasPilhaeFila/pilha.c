#include "stdio.h"
#include "stdlib.h"
#include <string.h>

typedef struct No{
    int dado;
    struct No *proximo;

    
} No;

No *topo_da_pilha = NULL;

void push(int novoDado){
    No *novoNo = malloc(sizeof(No));// novoNo armazena o endereco de memoria retronado pelo malloc(malloc retorna o primeiro endereco de memoria)

    if(novoNo == NULL){
        fprintf(stderr, "Erro na alocação de memória!\n");
        exit(EXIT_FAILURE);
    }

    (*novoNo).dado = novoDado; // ou novoNo->dado = novoDado
    (*novoNo).proximo = topo_da_pilha;
    topo_da_pilha = novoNo; // topo_da_pilha recebe o endereco de memoira que esta armazanado no novoNo, novoNo possui o endereco de memoria de um novo no que foi criado pelo malloc.

}

int pop(){
    if (topo_da_pilha == NULL) {
        fprintf(stderr, "Erro: Pilha vazia!\n");
        return -1; // Ou outra forma de indicar erro
    }

    int valor_do_topo = (*topo_da_pilha).dado;
    No *temp = topo_da_pilha;
    topo_da_pilha = topo_da_pilha->proximo;
    free(temp);
    return valor_do_topo;

}

void peek() {
    if (topo_da_pilha == NULL) {
        printf("Pilha vazia!\n");
        return;
    }
    printf("Topo da pilha: %d\n", topo_da_pilha->dado);
}

int estaVazia() {
    return (topo_da_pilha == NULL);
}


int main() {
    push(10);
    push(20);
    push(30);

    peek(); // Saída: Topo da pilha: 30

    printf("Desempilhado: %d\n", pop()); // Saída: Desempilhado: 30
    printf("Desempilhado: %d\n", pop()); // Saída: Desempilhado: 20

    peek(); // Saída: Topo da pilha: 10

    if (estaVazia()) {
        printf("A pilha está vazia.\n");
    } else {
        printf("A pilha não está vazia.\n");
    }

    printf("Desempilhado: %d\n", pop()); // Saída: Desempilhado: 10

    if (estaVazia()) {
        printf("A pilha está vazia.\n"); // Saída: A pilha está vazia.
    } else {
        printf("A pilha não está vazia.\n");
    }

    return 0;
}