#include <stdio.h>

int main(){

    int num = 10;
    int *pNum;
    int p2;

    pNum = &num;
    p2 =  &(*pNum);

    printf("Num ->%d\n", num);
    printf("*pNum ->%d\n", *pNum);
    printf("pNum ->%d\n", pNum);
    printf("&num ->%d\n", &num);
    printf("pNum ->%d\n", pNum);
    printf("p2 ->%d\n", p2);
    printf("*p2->%d\n", *pNum);
    
    return 0;
}