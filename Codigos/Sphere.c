#include <stdio.h>

int main(){

    double r;
    //(4.0/3) * pi * r^3
    double pi = 3.14159;
    double res;

    scanf("%lf", &r);

    res = (((4.0/3) * pi )* (r*r*r));

    printf("VOLUME = %.3lf\n", res);

    return 0;
}