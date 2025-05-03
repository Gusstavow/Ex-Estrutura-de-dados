#include <stdio.h>
#include <math.h>

void mov(int n, int *teste)
{
    
    unsigned long long movimentos = pow(2, n) - 1;
    printf("Teste %d\n", *teste);
    printf("%llu\n", movimentos);
    printf("\n");
}
int main()
{

    int n = 1;
    int teste =1;
    while (scanf("%d", &n) ==1 && n != 0)
    {
        
        mov(n, &teste);
        teste++;
    }

    return 0;
}