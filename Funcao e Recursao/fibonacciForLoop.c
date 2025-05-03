#include <stdio.h>

unsigned long long fib(int n)
{
    unsigned long long res = 0;
    unsigned long long fibN[n];

    for (int i = 0; i < 2; ++i)
    {
        fibN[i] = i;
        res = fibN[i];
        // printf("+++++ TESTE ++++ fib = %i\n", fibN[i]);
    }

    for (int i = 2; i <= n; i++)
    {
        fibN[i] = fibN[i - 1] + fibN[i - 2];
        res = fibN[i];
        // printf("Fib(%i) = %i\n",i, fibN[i] );
    }
    switch (n)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 1;
        break;

    default:
        return res;
        break;
    }
}

int main()
{

    int rep = 0;
    scanf("%d", &rep);
    int n[rep];
    for (int i = 0; i < rep; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < rep; i++)
    {
        printf("Fib(%i) = %llu\n", n[i], fib(n[i]));
    }

    return 0;
}