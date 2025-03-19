#include <stdio.h>

int main(){

    const int fuelKmPerL = 12;
    int spentTime = 0;
    int speed = 0;
    float res = 0.0f;

    scanf("%i", &spentTime);
    scanf("%i", &speed);

    res = ((float)speed / (float)fuelKmPerL) * spentTime;

    printf("%.3f\n", res);


    return 0;
}