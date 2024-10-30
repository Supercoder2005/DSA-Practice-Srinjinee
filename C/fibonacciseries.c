#include<stdio.h>
int main()
{
    int i,n,a,b,sum;
    printf("\n Enter value of n:");
    scanf("%d",&n);
    a=1;
    b=1;
    sum=1;
    for(i=1;i<=(n-2); i++){
        sum = a+b;
        a=b;
        b=sum;
    }
    printf("\n The %dth fibonacci number is = %d",n,sum);
    return 0;
}