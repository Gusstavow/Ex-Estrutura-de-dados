#include <stdio.h>

int main(){

    int hours =0;
    int min = 0;
    int sec = 0;

    int N = 0;
    scanf("%i", &N);

    
    min = N / 60;
    sec = N % 60;
    hours = min / 60;
    min = min - (hours * 60);

    printf("%i:%i:%i\n", hours, min, sec);
    return 0;
}