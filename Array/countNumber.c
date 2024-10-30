#include<stdio.h>
int main(){
    int i,x,arr[5]={78,56,32,-65,-5};
    printf("\n Enter any integer x:");
    scanf("%d",&x);
    int count =0;
    for(i=0;i<5;i++){
        if(arr[i]>x){
            count ++ ;
        }
    }
    printf("\n the no of elements of th earray greater than x is =%d",count);
    return 0;
}