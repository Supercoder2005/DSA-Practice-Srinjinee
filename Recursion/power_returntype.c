#include<stdio.h>
int power(int a,int b){
    if(b==0)
    return 1;
    int p ;
    p= a * power(a,b-1);
    return p;
}
int main(){
    int a,b;
    printf("\n Enter the base:");
    scanf("%d",&a);
    printf("\n Enter the power:");
    scanf("%d",&b);
    int Ans=power(a,b);
    printf("\n %d to the power %d is=%d",a,b,Ans);
    return 0;
}