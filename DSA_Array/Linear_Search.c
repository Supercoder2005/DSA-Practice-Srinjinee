#include<stdio.h>
int main(){
    int i,n,x;
    int found=0;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    printf("\n Enter the element to be searched :");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(arr[i]==x){
            found=1;
            break;
        }
    }
    if(found==0)
        printf("\n Element not found");
    else 
        printf("\n Element found at index - %d",i);
    return 0;
}