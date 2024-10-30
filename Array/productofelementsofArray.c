#include<stdio.h>
int main(){
    int i,n,arr[100]];
    printf("\n Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Enter element %d:",i);
        scanf("%d",& arr[i]);
    }
    int product=1;
    for(i=0;i<n;i++){
        product = product * arr[i];
    }
    printf("\n the product of all the elements of the array is= %d",product);
    return 0;
} 