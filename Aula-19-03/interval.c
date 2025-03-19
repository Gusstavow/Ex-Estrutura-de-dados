#include <stdio.h>

int main()
{

    float n = 0.0f;
    char simbols[4] = {
        '(',
        '[',
    };
    float number[10] = {0.0, 25.0, 50.0, 75.0, 100.0};
    int ind = 0;

    scanf("%f", &n);

    if (n < 0 || n > 100)
    {
        printf("Fora de intervalo\n");
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {

            if (n <= number[i + 1])
            {
                if (i + 1 < n)
                {
                    ind = 1;
                }

                printf("Intervalo %c%.f,%.f]\n", simbols[ind], number[i], number[i + 1]);
                break;
            }
            else if (number[i] > n)
            {
                if (i + 1 > n)
                {
                    ind = 0;
                }
                printf("Intervalo %c%.f,%.f]\n", simbols[ind], number[i], number[i + 1]);
                break;
            }
        }
    }
    return 0;
}