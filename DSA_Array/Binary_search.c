#include<stdio.h>
int binary_search(int arr[],int n,int x){
    int l,i,r,mid;
    l=arr[i];
    r=arr[n-1];
    while(l<r){
        mid = l + ((r-l)/2);
        if(mid==x){
            return mid;
        }
        if(x>mid){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
        return -1;
    }
}
    int main(){
    int i,n,result;
    printf("\n Enter the size of the array:");
    scanf("%d",& n);
    int arr[n];
    printf("\n Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    int l,r,mid,x;
    printf("\n Enter the element to be found out:");
    scanf("%d",&x);

    result = binary_search(arr,n,x);
    if(result==-1){
        printf("\n Element not found!");
    }
    else{
        printf("\n Element found at index : %d",i);
    }
    return 0;
}