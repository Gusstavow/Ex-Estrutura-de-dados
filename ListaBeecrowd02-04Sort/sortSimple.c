#include <stdio.h>

int main()
{

    int num[3];
    int n[3];
    int aux = 0;
    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    for (int i = 0; i < 3; i++)
    {
        n[i] = num[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (num[j] > num[j + 1])
            {
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", num[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}