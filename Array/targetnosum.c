#include<stdio.h>
int main(){
    int i,j,n,target;
    printf("\n enter the size of array:");
    scanf("%d",&n);
    printf("\n Enter the target no:");
    scanf("%d",&target);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("\n The two numbers are= %d ,%d",arr[i],arr[j]);
                break;
            }
        }
    }
    return 0;
}
