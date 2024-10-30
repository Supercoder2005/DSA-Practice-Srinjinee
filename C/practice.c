#include<stdio.h>
int main(){
    int n;
    printf("\n Enter a positive integer:");
    scanf("%d",&n);
    int fact=1;
    while(n!=0){
        fact=fact*n;
        n--;
    }
    printf("\n The factorial of %d ia = %d",n,fact);
    return 0;
}