#include <stdio.h>

void prime(int n){
    int div = 0;

    for(int i=1; i <= n; i++){
        if(n % i == 0){
            div++;
        }

        if(div > 2){
            printf("%i nao eh primo\n", n);
            break;
        }
    }

    if(div == 2){
        printf("%i eh primo\n", n);
    }
    div  =0;

}
int main(){

    int n = 0, rep;
    scanf("%i", &rep);
    for(int i =0; i< rep; i++){
        scanf("%i", &n);
        prime(n);
    }
    

    
    return 0;
}