#include<stdio.h>
void sum(int n,int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
    return;
}
int main(){
    int n;
    printf("\n Enter a number:");
    scanf("%d",&n);
    printf("\n The sum of the first %d numbers is:",n);
    sum(n,0);
    return 0;
}