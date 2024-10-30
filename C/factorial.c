#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("\n Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("\n The factorial of the given no is %d",fact);
    return 0;

}