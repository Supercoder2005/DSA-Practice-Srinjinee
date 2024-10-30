#include<stdio.h>
int power(int a,int b){
    if (b==0) return 1;
    int x= power(a,b/2);
    if(b%2==0) // b is a even integer
    return x*x;
    else //b is a odd integer
    return x*x*a;
}
int main(){
    int a,b;
    printf("\n Enter the base:");
    scanf("%d",&a);
    printf("\n Enter the power:");
    scanf("%d",&b);
    int ans=power(a,b);
    printf("\n %d to the power %d is=%d",a,b,ans);
    return 0;
}