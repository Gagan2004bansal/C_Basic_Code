#include<stdio.h>
int main() {
    // To check grade of steel 
    int hardness, tensile_strength ;
    printf("enter hardness of steel \n");
    scanf("%d", &hardness);
    printf("enter tensile strenght of steel \n");
    scanf("%d", &tensile_strength);
    float carbon_content ;
    printf("enter carbon content in steel \n");
    scanf("%f", &carbon_content);
    /* Hmbgt -> Hardness must be greater than 50 
       Ccmblt -> Carbon content must be less than 0.7
       Tsmbgt -> Tensile strenght must be greater than 5600 
    */
    if (hardness > 50 && tensile_strength > 5600 && carbon_content < 0.7)
    {
       printf("Grade is 10");
    }
    else if (hardness > 50 && tensile_strength > 5600)
    {
        if (carbon_content > 0.7)
        {
            printf("Grade is 9");
        }
        
    }
    else if (tensile_strength > 5600 && carbon_content < 0.7)
    {
        if (hardness < 50)
        {
            printf("Grade is 8");
        }
        
    }
    else if (hardness > 50 && carbon_content < 0.7)
    {
        if (tensile_strength < 5600)
        {
            printf("Grade is 7");
        }
        
    }
    else if (hardness > 50)
    {
        if (tensile_strength < 5600 && carbon_content > 0.7)
        {
            printf("Grade is 6");
        }
        
    }
    else if (tensile_strength > 5600)
    {
        if (hardness < 50 && carbon_content > 0.7)
        {
            printf("Grade is 6");
        }
        
    }
    else if (carbon_content < 0.7)
    {
        if (hardness < 50 && tensile_strength < 5600)
        {
            printf("Grade is 6");
        }
        
    }
    else
    {
        printf("Grade is 5");
    }
    return 0;
}