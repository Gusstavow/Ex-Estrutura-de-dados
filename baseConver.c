#include <stdio.h>
#include <string.h>


int main(){

    int n=0;
    


    scanf("%i", &n);
    char base[n][3];
    int val[n];
    int resto = 0, q = 0;
    for(int i =0; i < n; i++){
        scanf("%i %s", &val[i], &base[i]);

    }

   for(int i =0; i <n; i++){
    if(strcmp(base[i], "bin") == 0){
        printf("%x hex\n", val[i]);


    }
    if(strcmp(base[i], "dec") == 0){
        q = q + val[i] / 2;
        resto = val[i] % 2;

        printf("%i.", resto);
        

    }

   }
    return 0;
}