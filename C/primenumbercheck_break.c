#include<stdio.h>
int main()
{
    int i,n,a=0;
    printf("\n Enter any number:");
    scanf("%d",&n);
    for (i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1) printf("\n 1 is neither prime nor composite");
    else if (a==0) printf("\n the given number is prime");
    else printf("\n the given number is composite");
    return 0;
}