#include<stdio.h>
void PreInPost(int n){
    if (n==0)
    return;
    printf("\n Pre %d",n);
    PreInPost(n-1);
    printf("\n In %d",n);
    PreInPost(n-1);
    printf("\n Post %d",n);
    return;
}
int main(){
    int n;
    printf("\n enter the value of n:");
    scanf("%d",&n);
    PreInPost(n);
    return 0;
}