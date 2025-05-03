#include <stdio.h>

long fatorial(int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * fatorial(n - 1));
    }
}
int main()
{
    int n1 = 0, n2 = 0;
    while (scanf("%i %i", &n1, &n2) != EOF)
    {

        long fat1 = fatorial(n1);
        long fat2 = fatorial(n2);
        long long sum = fat1 + fat2;
        printf("%Ld\n", sum);
    }

    return 0;
}