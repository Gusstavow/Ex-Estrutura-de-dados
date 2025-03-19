#include <stdio.h>

int main()
{

    int x, y, z;
    FILE *arq;

    arq = fopen("Noome.txt", "w");

    fprintf(arq, "10 20 30");
    arq = fopen("Noome.txt", "r");
    
    fscanf(arq, "%i %i %i", &x, &y, &z);
    printf("%i %i %i", x, y, z);
    fclose(arq);
    return 0;
}