#include<stdio.h>
#include<math.h>
/* To check the enter number is divisble by 2 or not 
if it is showing 0 then it means it is divisible by 2
if it is not showing equal to 0 it means it is not divisble by 2 */
int main() {
    int x;
    printf("enter x");
    scanf("%d", &x);

    printf("divisible by c checking : %d", x%2);
    return 0;
}