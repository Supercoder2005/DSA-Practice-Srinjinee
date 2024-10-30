#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,power;
    printf("\n Enter a:");
    scanf("%d",&a);
    printf("\n Enter b:");
    scanf("%d",&b);
    power = pow(a,b);
    printf("\n The final ans is a to the power b =%d",power);
    return 0;
}