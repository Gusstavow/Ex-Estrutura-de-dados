#include <stdio.h>

int main()
{

    int m = 0, n = 0;
    int stop = 0, maior = 0, sum = 0, cont = 0;

    do
    {
        sum = 0;
        scanf("%d %d", &m, &n);
        if (m < n)
        {
            stop = m;
            maior = n;
        }
        else
        {
            stop = n;
            maior = m;
        }
        if (m > 0 && n > 0)
        {

            for (int i = stop; i <= maior; i++)
            {
                sum += i;
                printf("%d ", i);
            }

            printf("Sum=%i\n", sum);
        }

    } while (stop > 0);

    return 0;
}