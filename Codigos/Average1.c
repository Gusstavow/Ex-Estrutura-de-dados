#include <stdio.h>

int main()
{

    double A, B, avg;
    float weightA = 3.5, weightB = 7.5;

    scanf("%lf", &A);
    scanf("%lf", &B);

    avg = ((A * weightA )+ (B * weightB))/(weightA + weightB);
    printf("MEDIA = %.5lf\n", avg );

        return 0;
}