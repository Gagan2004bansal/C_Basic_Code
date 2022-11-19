#include<stdio.h>
#include<math.h>
/*  Assignment Operators 
= means a = b
+= means a = a + b
-= means a = a - b
*= means a = a * b
/= means a = a / b
%= means a = a % b
                    */
int main () {
    int a,b;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);

    printf(" a is : %d ", a+=b);
    return 0;
}