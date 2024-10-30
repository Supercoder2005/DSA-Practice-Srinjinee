#include<stdio.h>
void swap(int arr[]){
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return ;
}
int main(){
    int arr[2]= {2,3};
    printf("\n %d %d",arr[0],arr[1]);
    swap(arr);
    printf("\n %d %d",arr[0],arr[1]);
    return 0;
}

// swapping function through array is much more easy because it doesn't need pass by reference or pointers ,,, array works on pass by reference method.