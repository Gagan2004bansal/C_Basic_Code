#include<stdio.h>
int main(){
    // Here We add 3 numbers //
    int a,b,c;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    printf("enter c");
    scanf("%d", &c);

    int sum = a + b + c;
    printf("sum is %d", sum);
    return 0;
}