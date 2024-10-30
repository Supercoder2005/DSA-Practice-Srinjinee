#include<stdio.h>
int main(){
    int i,n;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements of the array:");
    for(i=0;i<n;i++){
        printf("\n Element[i]");
        scanf("%d",&arr[i]);
    }
    printf("\n The array is given below---");
    for(i=0;i<n;i++){
        printf("\n %d",arr[i]);
        
    }
    return 0;
}