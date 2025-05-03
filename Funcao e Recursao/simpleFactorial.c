#include <stdio.h>

 long long factorial(int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
      int m = 0, n = 0;
    while (scanf("%d %d", &m, &n) != EOF)
    {
        
         long long fat1 = factorial(m);
         long long fat2 = factorial(n);
        
        printf("%lld\n", fat1 + fat2);
    }

    return 0;
}