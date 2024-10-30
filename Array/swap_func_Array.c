#include<stdio.h>
void swap(int a[]){
    int temp = a[0];
    a[0]=a[1];
    a[1]=temp;
    return;
}
int main(){
    int arr[2]={4,8};
    printf("%d %d", arr[0],arr[1]);
    printf("\n After swapping :");
    swap(arr);
    printf("\n %d %d",arr[0],arr[1]);
    return 0;    
}