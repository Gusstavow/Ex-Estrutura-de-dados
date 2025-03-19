#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char numeros[10][10] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    
    char input[10]; 
    int n = 0;
    

    while (scanf("%s", input) != EOF) {
        
        if (isalpha(input[0])) {
            for (int i = 0; i < 10; i++) {
                if (strcmp(input, numeros[i]) == 0) {
                    printf("%d\n", i); 
                    break;
                }
            }
        }
      
        else if (isdigit(input[0])) {
            n = input[0] - '0';  
            printf("%s\n", numeros[n]);  
        }
    }

    return 0;
}
