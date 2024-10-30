#include<stdio.h>
void swap(int p, int q){
    int x,y,temp;
    temp=x;
    x=y;
    y=temp;
    printf("\n swapped_num = %d%d",x,y);
}
int main(){
    int a,b;
    printf("\n Enter first no:");
    scanf("%d",&a);
    printf("\n Enter second no:");
    scanf("%d",&b);
    swap(a,b);
    return 0;

}