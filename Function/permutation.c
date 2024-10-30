#include<stdio.h>
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
    fact = fact*i;
    return fact;
}

int main(){
    int n,r;
    printf("\n Enter n:");
    scanf("%d",&n);
    printf("\n Enter r:");
    scanf("%d",&r);
    int npr = fact(n)/fact(n-r);
    printf("\n npr=%d",npr);
    return 0;
}

