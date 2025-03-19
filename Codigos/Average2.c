#include <stdio.h>

int main(){

    float A, B, C, avg;
    float weightA = 2.0, weightB = 3.0, weightC = 5.0;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    avg = ((A * weightA )+ (B * weightB) + (C * weightC))/(weightA + weightB + weightC);

    printf("MEDIA = %.1f\n", avg);
    return 0;
}