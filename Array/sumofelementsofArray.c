#include<stdio.h>
int main(){
    int i,n,arr[100];
    printf("\n Enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Enter element %d=",i);
        scanf("%d",& arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++){
        sum = sum + arr[i];
    }
    printf("The sum of the elements=%d",sum);
    return 0;
}