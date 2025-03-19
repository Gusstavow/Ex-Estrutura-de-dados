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
        for (int i = 0; i < 5; i++)
        {

            if (n <= number[i])
            {

                if (number[i - 1] == 0)
                {
                    ind = 1;
                }
                else
                {
                    ind = 0;
                }
                if (number[i] > 0)
                {
                    printf("Intervalo %c%.f,%.f]\n", simbols[ind], number[i - 1], number[i]);
                    break;
                }else{
                    printf("Intervalo %c%.f,%.f]\n", simbols[ind], number[i], number[i+1]);
                    break;
                }
            }
            // else if (n > number[i])
            // {
            //         ind = 0;

            //     printf("Intervalo %c%.f,%.f]\n", simbols[ind], number[i], number[i + 1]);
            //     break;
            // }
        }
    }
    return 0;
}