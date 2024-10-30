#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("\n Enter n:");
    scanf("%d",&n);
    if(n%2==0){
        sum= -n/2 ;
    }
    else{
        sum = -n/2 + n;
    }
    printf("\n The sum is: %d",sum);
    return 0;
}