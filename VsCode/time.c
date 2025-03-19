#include <stdio.h>

int main()
{

    int sec = 0;

    int times[3] = {3600, 60, 1};
    int res[3];

    scanf("%d", &sec);

    for (int i = 0; i < 3; i++)
    {

        res[i] = sec / times[i];
        sec = sec - (res[i] * times[i]);
    }

    printf("%i:%i:%i\n", res[0], res[1], res[2]);

    return 0;
}