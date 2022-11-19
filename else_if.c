#include<stdio.h>
int main () {
    int age;
    printf("enter age");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf(" YOU ARE ADULT");
    }
    else if (age < 18 && age >12)
    {
        printf(" you are teenager");
    }
    else
    {
        printf("you are child");
    }
    
    
}