#include<stdio.h>
int main(){
    int i,j,n,temp;
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
    // insertion sort 
    // here we consider the first element of the array --. arr[0] is already sorted . so we start the outer loop from i=1
    for(i=1;i<n;i++){
        temp=arr[i];
        // now its time to start the inner loop of j 
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("\n The array after sorting---\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}