#include<stdio.h>
int main(){
    int i,n;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements of the array:");
    for(i=0;i<n;i++){
        printf("\n Element[i]");
        scanf("%d",&arr[i]);
    }
    printf("\n The array is given below---");
    for(i=0;i<n;i++){
        printf("\n %d",arr[i]);
    }
    int pos;
    printf("\n Enter the position from which you want to delete the item:");
    scanf("%d",& pos);
    for(i=pos-1 ; i<= n-1 ; i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("\n The array after the deletion of element---");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
