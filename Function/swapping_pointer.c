#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return ;
}
int main(){
    int a,b;
    printf("\n enter the first no:");
    scanf("%d",&a);
    printf("\n Enter the second no:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\n After swapping a=%d , b=%d",a,b);
    return 0;
}