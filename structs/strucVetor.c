#include <stdio.h>
#include <stdio.h>

struct pessoa
{
    char nome[50];
    int idade;
    float sal;
};
int main()
{
    const int n = 2;
    struct pessoa pessoa[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &pessoa[i].nome);
        scanf("%d", &pessoa[i].idade);
        scanf("%f", &pessoa[i].sal);
    }

    for (int i = 0; i < n; i++)
    {
       
        printf("Nome: %s \n", pessoa[i].nome);
        printf("idade: %d \n", pessoa[i].idade);
        printf("salario: %.2f \n", pessoa[i].sal);
    }

    return 0;
}