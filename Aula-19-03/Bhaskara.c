#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c;
    float x1 = 0.0f, x2 = 0.0f, delta = 0.0f;
    // delta= b^2 -4 a c
    scanf("%f %f %f", &a, &b, &c);

    delta = (b * b) - 4 * a * c;
    // x = (-b (+-) sqrt(delta))/2*a
    x1 = (-b + sqrt(delta)) / (2 * a);

    x2 = (-b - sqrt(delta)) / (2 * a);

    if (delta <= 0 || a <= 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5f\n", x1);
        printf("R2 = %.5f\n", x2);
    }

    return 0;
}