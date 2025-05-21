#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main()
{
    int n = 0;
    scanf("%d", &n);

   
    unsigned int num[n];
    int countEven = 0;
    int countOdd = 0;

  
    for (int i = 0; i < n; i++)
    {
        scanf("%u", &num[i]); 
        if (num[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }

   
    int aux;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }

    
    unsigned int even[countEven];
    unsigned int odd[countOdd];

    int indEven = 0;
    int indOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            even[indEven] = num[i];
            indEven++;
        }
        else
        {
            odd[indOdd] = num[i];
            indOdd++;
        }
    }

   
    indEven = 0;
    indOdd = countOdd - 1; 

    for (int i = 0; i < n; i++)
    {
        if (i < countEven)
        {
            
            num[i] = even[indEven];
            indEven++;
        }
        else
        {
            
            num[i] = odd[indOdd];
            indOdd--; 
        }
    }

    
    for (int i = 0; i < n; i++)
    {
        printf("%u\n", num[i]); 
    }

    return 0;
}