#include<stdio.h>
int main(){
    int i,j,n;
    printf("\n enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }

    int temp;
    printf("Arranging elements in descending order---");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}