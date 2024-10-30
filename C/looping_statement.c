#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("\n Enter any  number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count=count+1;
        }
    }
    if(count==2){
        printf("\n The number is prime");
    }
    else{
        printf("\n The number is composite");
    }
    return 0;
}