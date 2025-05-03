#include <stdio.h>

long fib(int n)
{
    int m = n;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(m - 1);
    }
}

int main()
{
    int r = 0;

    scanf("%i", &r);
    int n[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%i", &n[i]);
    }
    for (int i = 0; i < r; i++)
    {
        printf("Fib (%i) = %li\n",n[i], fib(n[i]));
    }

    return 0;
}