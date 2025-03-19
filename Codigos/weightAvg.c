#include <stdio.h>

int main()
{

    float N[3], avg[3];
    int n;
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {

        scanf("%f %f %f", &N[0], &N[1], &N[2]);
    }

    avg = (((N[0] * 2) + (N[1] * 3) + (N[2] * 5)) / (2 + 3 + 5));
    for (int i = 0; i < n; i++)
    {
        printf("%f\n", avg[i]);
    }

    return 0;
}