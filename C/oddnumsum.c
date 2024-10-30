#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("\n Enter the no of terms:");
    scanf("%d",&n);
    printf("\n The odd numbers are:");
    for(i=1;i<=n;i++){
        printf("%d ",2*i-1);
        sum += 2*i-1;
    }
    printf("\n The sum odd natural numbers upto %d terms:%d",n,sum);
    return 0;
}