#include<stdio.h>
int sum(int,int);
void main(){
    int a,b,c;
    printf("\n Enter two numbers:");
    scanf("%d%d",&a,&b);
    c = sum(a,b);
    printf("\n Sum is %d",c);
}
int sum (int x,int y){
    int sum=0;
    sum=x+y;
    return sum;
}