#include <stdio.h>

int main()
{
    int n;
    int lista[n];
    int aux = 0;
    int i = 0;
    int temp;
    int qtd;

    // int listaOrd[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &temp);

        if (temp != 0)
        {

            qtd++;
        }
    }

    printf("%d ", qtd);

    return 0;
}