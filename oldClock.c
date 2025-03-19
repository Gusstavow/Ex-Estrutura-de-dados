#include <stdio.h>

int main()
{

    const int HOUR = 30, MIN = 6; // horas 360 graus / 12 horas = 30 graus por hora
                                  // minutos 5 minutos * 12 horas = 60 --- 360/60 = 6 graus por minuto
    unsigned int hour = 0, min = 0;

    while (scanf("%u %u", &hour, &min) != EOF)
    {
        
        if (hour > 360 || min > 360)
        {   //printf("ERROR!!!!\n");
            return 0;
        }
        hour /= HOUR;
        min /= MIN;

      
        printf("%.2u:%.2u\n", hour, min);
    }

    return 0;
}