#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("\n Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
    }
    printf("\n The sum is:%d",sum);
    return 0;
}