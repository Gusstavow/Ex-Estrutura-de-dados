#include <stdio.h>

int main()
{

    double A = 0.0f, B = 0.0f, C = 0.0f, tmp = 0.0f;

    scanf("%lf %lf %lf", &A, &B, &C);

    for (int i = 0; i < 9; i++)
    {
        if (A < B)
        {
            tmp = A;
            A = B;
            B = tmp;
        }
        else if (B < C)
        {
            tmp = C;
            C = B;
            B = tmp;
        }
    }

    if (A >= B + C)
    {

        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if (A * A == B * B + C * C)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if (A * A > B * B + C * C)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if (A * A < B * B + C * C)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if (A == B || B == C || C == A)
    {
        if (A != B || B != C || C != A)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}