#include<stdio.h>
void increasing(int n){
    if(n==0) //code
    return;
    increasing(n-1); // recursive call
    printf("\n %d",n); //code
    return;
}
int main(){
    int n;
    printf("\n Enter the number:");
    scanf("%d",&n);
    increasing(n);
    return 0;
}