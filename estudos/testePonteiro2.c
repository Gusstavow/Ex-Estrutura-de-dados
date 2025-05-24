#include <stdio.h>

void alterar(int **p, int *valor)
{
    *p =  valor;
}

int main()
{
    int *i;
    int m = 100;
    i = &m;
    int val = 115;
    int num = 0;
    int *ptr = &num;
    int **ptr_ptr = &ptr;

    printf("num %d\n", num);
    printf("&num %p\n", &num);

    printf("ptr %p\n", ptr);
    printf("*ptr %d\n", *ptr);

    printf("Alterar valor pelo ptr\n");
    *ptr = 10;
    printf("num %d\n", num);
    printf("&num %p\n", &num);

    printf("ptr %p\n", ptr);
    printf("*ptr %d\n", *ptr);

    printf("Alterar valor de num pelo ptr_ptr\n");
    //**ptr_ptr = 777;
    alterar(&ptr,  &val);

    printf("num %d\n", num);
    printf("&num %p\n", &num);

    printf("ptr %p\n", ptr);
    printf("*ptr %d\n", *ptr);
    

    return 0;
}