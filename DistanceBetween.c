#include <stdio.h>
#include <math.h>
int main(){

    //Distance sqrt((x2 - x1)^2 + (y2 - y1)^2);

    double x1 , x2 , y1, y2;
    double res = 0.0f;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    res = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("%.4lf\n", res);

    return 0;
}