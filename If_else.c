#include<stdio.h>
int main () {
    int number;
    printf("enter number : ");
    scanf("%d", &number);
    if (number > 10) {
        printf("You are elegible \n");
    }
    else {
        printf("You are not elegible \n");
    }
    return 0;
}
