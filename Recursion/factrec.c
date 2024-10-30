#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;
    int recAns = (n*factorial(n-1));
    return recAns;
}
int main(){
    int a,fact;
    printf("\n Enter any number:");
    scanf("%d",&a);
    fact=factorial(a);
    printf("\n The factorial of %d is=%d",a,fact);
    return 0;
}