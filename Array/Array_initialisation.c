#include<stdio.h>
int main(){
    int i, a[5];
    printf("\n Enter the elements of the array:");
    for(i=0;i<=5;i++){
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
    
    return 0;
}