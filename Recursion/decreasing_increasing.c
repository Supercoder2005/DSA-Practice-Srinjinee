#include<stdio.h>
void decreasing_increasing(int n){
    if(n==0) //code
    return;
    printf("\n %d",n);
    decreasing_increasing(n-1); // recursive call
    printf("\n %d",n); //code
    return;
}
int main(){
    int n;
    printf("\n Enter the number:");
    scanf("%d",&n);
    decreasing_increasing(n);
    return 0;
}