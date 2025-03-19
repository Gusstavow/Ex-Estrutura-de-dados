#include <stdio.h>

int main()
{

    const int year = 365;
    const int mounth = 30;

    int yearInDays = 0;

    int qttyYears = 0;
    int qttyMounth = 0;
    int qttyDays = 0;

    int res = 0.0f;

    scanf("%i", &yearInDays);

    qttyYears = yearInDays / year;
    qttyMounth = (yearInDays % year) / mounth;
    qttyDays = (yearInDays % year) % mounth;

    printf("%i ano(s)\n", qttyYears);
    printf("%i mes(es)\n", qttyMounth);
    printf("%i dia(s)\n", qttyDays);

 

    return 0;
}