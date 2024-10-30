#include<stdio.h>
int main()
{
    int n,sum=0,last_digit=0;
    printf("\n enter the number:");
    scanf("%d",&n);
    while(n!=0){
        last_digit=n%10;
        n=n/10;
        if(last_digit % 2 == 0) {
          sum=sum+last_digit;
        }
    }
    printf("\n The sum of all the even digits of th egiven number is = %d",sum);
    return 0;
}