#include<stdio.h>
void greeting(int n){
    if(n==0) 
    return;
    printf("\n Good Morning.");
    greeting(n-1);
}
int main(){
    int n;
    printf("\n Enter no of lines:");
    scanf("%d",&n);
    greeting(n);
    return 0;
}