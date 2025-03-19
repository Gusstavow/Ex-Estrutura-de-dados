#include <stdio.h>
#include <math.h>


int main(){

    double A,B,C;
    double delta;
    double x1, x2;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    //printf("%lf %lf %lf \n", A, B, C);

    //Delta
    delta = (B*B) - 4 * A * C;

    if(A == 0 || delta < 0){
        printf("Impossivel calcular\n");
        return 0;
    }
    
    x1 = ( (-B) + sqrt(delta))/(2 *A);
    x2 = ( (-B) - sqrt(delta))/(2 *A);

    printf("R1 = %.5lf\n", x1);
    printf("R2 = %.5lf\n", x2);

    return 0;
}