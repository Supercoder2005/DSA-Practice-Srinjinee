#include<stdio.h>
int swap(int* x,int* y){
    int temp;
    temp = *x + *y;
    return temp;
}
int main(){
    int a,b;
    printf("\n enter the first no:");
    scanf("%d",&a);
    printf("\n Enter the second no:");
    scanf("%d",&b);
    int sum = swap(&a,&b);
    printf("\n After addition the result is =%d " ,sum);
    return 0;
}