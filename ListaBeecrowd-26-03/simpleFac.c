#include <stdio.h>

long fac(int n){

    if(n == 0){

        return 1;
    }else{

        return n * fac(n-1);
    }

    
}

int main(){
    
    
    int n = 0;
    scanf("%li", &n);
    long A = fac(n);
    printf("%li\n", A);
    return 0;
}