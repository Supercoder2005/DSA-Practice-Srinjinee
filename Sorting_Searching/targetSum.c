#include<stdio.h>
int main(){
    int n,target;
    printf("\n enter the size of the sorted array:");
    scanf("%d",&n);
    printf("\n Enter the target no:");
    scanf("%d",&target);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    printf("\n The sorted array in increasing order is ---\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("\n the two numbers are=%d,%d",arr[i],arr[j]);
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
        else{
            j++;
        }
        break;
    }
    return 0;
}