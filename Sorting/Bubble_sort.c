#include<stdio.h>
int main(){
    int i,j,n;
    printf("\n Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    printf("\n The array given by the user ---\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // Bubble sort algorithm
    int temp,flag;
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    printf("\n The array after sorting---\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}
