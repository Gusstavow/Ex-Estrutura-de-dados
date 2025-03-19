#include <stdio.h>
#include <string.h>

int main()
{

    char numeros[4][10] = {"zero", "um", "dois", "tres"};

    char input[10];
    int n = 0;
    scanf("%s", &input);
    n = input[0] - '0';
    int ind = 0;

    for (int i = 0; i < 10; i++)
    {
        if (strcmp(input, numeros[i]) == 0)
        {
            printf("%i\n", i);
            ind = i;
            
            
         }//else{
        //     printf("%s\n", numeros[i]);
        // }
        
       
    }

  


    return 0;
}