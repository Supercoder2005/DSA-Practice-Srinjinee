#include<stdio.h>
int stair(int n){
    if(n==1 || n==2)
    return n;
    int totalWays = stair(n-1) + stair(n-2);
    return totalWays;
}
int main(){
    int n;
    printf("\n enter the no of step:");
    scanf("%d",&n);
    int Ans = stair(n);
    printf("\n The no of ways we can reach the %d th step via single or double step is=%d",n,Ans);
    return 0;
}