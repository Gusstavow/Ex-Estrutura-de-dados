#include <stdio.h>

int main()
{

    int *memoriaAlloc;

    memoriaAlloc = malloc(sizeof(*memoriaAlloc));
    
    free(memoriaAlloc);

        printf("Tamanho: %d\n", memoriaAlloc);

    return 0;
}