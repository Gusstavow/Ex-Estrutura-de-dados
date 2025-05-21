#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    int alt = 20;
    int num = 10;

    printf("alt %d\n", alt);
    ptr = &alt;
    *ptr = 100;

    printf("Ponteiro %d\n", *ptr);
    printf("num %d\n", num);
    printf("alt %d\n", alt);
    return 0;
}