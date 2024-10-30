#include<stdio.h>
int main(){
    int i,a[100],n;
    printf("\n\n Read a number of values in an array and display it in reverse order:\n");
    printf("---------------------------------------------------------------------------\n");
    printf("\n Enter the no of elements stored in the array:");
    scanf("%d",&n);
    printf("\n Input %d number of elements in the array:\n",n);
    for(i=0;i<n;i++){
        printf("element - %d:",i);
        scanf("%d",&a[i]);
    }
    printf("\n The values stored in the array are:\n");
    for(i=0;i<n;i++){
        printf("%5d",a[i]);
    }
    printf("\n\n The values stored in the array in reverse are:\n");
    for(i=n-1;i>=0;i--){
        printf("%5d",a[i]);
    }
    printf("\n\n");
    return 0;
}