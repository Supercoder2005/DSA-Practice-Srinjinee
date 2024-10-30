#include<stdio.h>
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
    fact = fact*i;
    return fact;
}
int combination(int n, int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n,r;
    printf("\n Enter n:");
    scanf("%d",&n);
    printf("\n Enter r:");
    scanf("%d",&r);
    int ncr = combination(n,r);
    printf("\n ncr=%d",ncr);
    return 0;
}
