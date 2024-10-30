#include<stdio.h>
int main()
{
    int n,rev=0,sum=0,temp;
    printf("\n Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rev=rev*10;
        rev=rev+(temp%10);
        temp=temp/10;
    }
    sum = n + rev;
    printf("\n The reverse of the number is = %d",rev);
    printf("\n The sum of the given no and its reverse no is = %d",sum);
    return 0;
}