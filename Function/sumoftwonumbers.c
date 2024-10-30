#include<stdio.h>
int addition(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("\n Enter first number:");
    scanf("%d",&a);
    printf("\n Enter second number:");
    scanf("%d",&b);
    int sum = addition(a,b);
    printf("sum=%d",sum);
    return 0;
}