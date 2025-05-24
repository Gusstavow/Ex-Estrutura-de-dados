#include <stdio.h>
#include <stdlib.h>

void alterarPtr(int **ptrPtr, int *valor)
{
    
   

    *ptrPtr = valor;
   
    // printf("*ptrPtr %p\n", *ptrPtr);
    // printf("**ptrPtr %d\n", **ptrPtr);
    // printf("ptrPtr %p\n", ptrPtr);
}

int main()
{

    int *ptr;
    int alt = 20;
    int num = 666;
    int *teste = &num;
int *gu = &alt;
    printf("alt %d\n", alt);
    ptr = &num;
    *ptr = 100;
    int **ptrPtr;

    ptrPtr = &ptr;
    **ptrPtr = 999;
    //*ptrPtr = teste;

    alterarPtr(&teste, gu);

    printf("Ponteiro %d\n", *ptr);
    printf("num %d\n", num);
    printf("*teste %d\n", *teste);
    printf("teste %p\n", teste);
    printf("&teste %p\n", &teste);
    printf("alt %d\n", alt);
    printf("ptrPtr %p\n", ptrPtr);
    printf("Ponteiro %p\n", ptr);
    printf("&Ponteiro %p\n", &ptr);
    printf("&num %p\n", &num);
    printf("&alt %p\n", &alt);

    printf("NUM  -> %d", num);
    return 0;
}