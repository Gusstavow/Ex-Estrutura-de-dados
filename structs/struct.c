#include <stdio.h>
#include <stdio.h>



struct pessoa {
    char nome[50];
    int idade;
};
int main(){

struct pessoa jose, maria;

    jose.idade = 22;
    maria.idade = 20;

    strcpy(jose.nome, "Jose");
    strcpy(maria.nome, "Maria");

   // maria = jose;
    printf("Pessoa %s \n", jose.nome);
    printf("Pessoa %s \n", maria.nome);

    printf("idade %d \n", jose.idade);
    printf("idade %d \n", maria.idade);

    return 0;
}