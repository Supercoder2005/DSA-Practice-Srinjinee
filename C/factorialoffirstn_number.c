#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("\n Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
        printf("\n The factorial of %d is = %d",i,fact);
    }
    return 0;
}