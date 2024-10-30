#include<stdio.h>
int min(int p,int q){
    if(p<q)
    return p;
    else
    return q;
}
int gcd(int x,int y){
    int hcf;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
             hcf=i;
        }
    }
    return hcf;
}
int main(){
    int a,b,hcf;
    printf("\n Enter a:");
    scanf("%d",&a);
    printf("\n Enter b:");
    scanf("%d",&b);
    hcf=gcd(a,b);
    printf("\n The HCF of %d & %d is %d",a,b,hcf);
    return 0;
}