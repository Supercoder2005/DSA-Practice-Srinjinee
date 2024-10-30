#include<stdio.h>
int decreasing(int n){
    if(n==0) 
    return 0;
    printf("\n %d",n);
    return decreasing(n-1);

}
int main(){
    int a;
    printf("\n Enter the last digit:");
    scanf("%d",&a);
    printf("\n The numbers in decreasing order is:");
    decreasing(a);
    return 0;
}