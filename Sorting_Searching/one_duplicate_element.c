#include<stdio.h>
int main(){
    int i,j,n;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n The duplicate number in the array is = ");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d", arr[i]);
            }
        }
    }
    return 0;
}