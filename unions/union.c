#include <stdio.h>

union teste{
    int x;
    unsigned char c[2];
};
int main(){

    union teste teste;

    teste.x = 1545;
    //teste.c[1] = 'H';
    printf("Teste ->>> %d\n", teste.x);
    printf("Teste c[0] ->>> %d\n", teste.c[0]);
    printf("Teste c[1->>> %d\n", teste.c[1]);
    return 0;
}