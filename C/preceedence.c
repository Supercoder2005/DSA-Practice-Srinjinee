#include<stdio.h>
int main(){
    int i,fact=1,n;
    printf("\n Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);

    return 0;
}