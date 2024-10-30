#include<stdio.h>
int fibo(int n){
    if (n==1 || n==2)
    return 1;
    int fibonacci= fibo(n-1) + fibo(n-2);
    return fibonacci;
}
int main(){
    int n;
    printf("\n Enter the no of term of the Fibonacci series:");
    scanf("%d",&n);
    int ans=fibo(n);
    printf("\n The %d th fibonacci term is =%d",n,ans);
    return 0;
}