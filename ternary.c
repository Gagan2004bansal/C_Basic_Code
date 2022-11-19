#include<stdio.h>
int main ()
{
    int number ;
    printf("number");
    scanf("%d", &number);

    number >= 0 ? printf(" NATURAL NUMBER \n") : printf("INTEGER \n");
    return 0;
}