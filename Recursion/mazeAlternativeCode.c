#include<stdio.h>
int maze(int n,int m){
    int rightWays=0;
    int downWays=0;
    if(n==1 && m==1)
    return 1;
    if(n==1)
    return rightWays += maze(n,m-1);
    if(m==1)
    return downWays += maze(n-1,m);
    if(n>1 && m>1){
        rightWays += maze(n,m-1);
        downWays += maze(n-1,m);
    }
    int TotalWays = rightWays + downWays;
    return TotalWays;
}
int main(){
    int n,m;
    printf("\n Enter no of rows:");
    scanf("%d",&n);
    printf("\n Enter no of coloumns:");
    scanf("%d",&m);
    int ways=maze(n,m);
    printf("%d",ways);
    return 0;
}