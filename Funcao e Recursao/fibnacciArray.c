#include <stdio.h>

unsigned long long fib(int n){

    if(n == 0){
        return 0;
    }else if(n == 1){

        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){

    int rep = 0;
    scanf("%d", &rep);
    int n[rep];
    for(int i =0; i < rep; i++){
        scanf("%d", &n[i]);

    }

    for(int i =0; i < rep; i++){
        printf("Fib (%d) = %llu\n", n[i], fib(n[i]));

    }
    return 0;
}