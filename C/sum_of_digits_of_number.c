#include<stdio.h>
int main()
{
    int n,sum=0,last_digit=0;
    printf("\n Enter any number:");
    scanf("%d",&n);
    while(n!=0){
        last_digit = n%10;
        n = n/10;
        sum = sum+last_digit;
    }
    
    printf("\n The sum of the digits of the given number =%d",sum);
    return 0;
}