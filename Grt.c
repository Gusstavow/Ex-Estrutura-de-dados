#include <stdio.h>


int abs_(int num1, int num2)
{

    int res = 0;
    res = num1 - num2;
    if (res < 0)
    {
        res = res * -1;
    }

    return res;
}

int sum(int num1, int num2)
{

    return num1 + num2;
}


int main()
{
    //(a+b+abs(a-b))/2
    // a =10 b =5
    //(10 + 5 + |10 - 5|) /2
    // (15 + 5) / 2 = 10

    const int n = 3;
    int num[n];
    int res =0;
    scanf("%i %i %i", &num[0], &num[1], &num[2]);
    res = (sum(num[0], num[1]) + abs_(num[0],num[1])) / 2;
    res = (sum(res,num[2]) + abs_(res, num[2])) / 2;
    
    printf("%i eh o maior\n", res);

    return 0;
}



