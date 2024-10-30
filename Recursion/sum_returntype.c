#include<stdio.h>
int sum(int n){
    if(n==0 || n==1)
    return n;
    int recAns= n + sum(n-1);
    return recAns;
}
int main(){
    int n;
    printf("\n enter any number:");
    scanf("%d",&n);
    int s=sum(n);
    printf("%d",s);
    return 0;
}