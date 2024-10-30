#include<stdio.h>
int power(int a, int b){
    int x=1;
    for(int i=1;i<=b;i++){
        x = x*a;
    }
    return x;
}
int main(){
    int a;
    printf("\n enter the base:");
    scanf("%d",&a);
    int b;
    printf("\n Enter the power:");
    scanf("%d",&b);
    int Ans= power(a,b);
    printf("%d",Ans);
   // printf("\n %d to the power %d is = %d",a,b,power);
    return 0;
}