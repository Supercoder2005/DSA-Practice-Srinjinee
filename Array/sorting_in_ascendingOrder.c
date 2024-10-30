#include<stdio.h>
int main(){
    int i,j,n,temp;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements of the array---\n");
    for(i=0;i<n;i++){
        printf(" Element %d -",i);
        scanf("%d",&arr[i]);
    }
    printf("\n The user given array is ---\n");
    for(i=0;i<n;i++){
        printf(" arr = %d ",arr[i]);
    }
    //arrange the elements in ascending order 
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n The elements of the array in ascending order --- ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
