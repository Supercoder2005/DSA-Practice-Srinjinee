#include<stdio.h>
int main(){
    int number;
    long long factorial=1;
    printf("\n Enter a positive integer:");
    scanf("%d",&number);
    if(number<0){
        printf("\n Error: Enter a non-negative integer");
        return 1;
    }
    while(number>0){
        factorial=number*factorial;
        number --;
    }
    printf("\n Factorial:%lld",factorial);
    return 0;
}