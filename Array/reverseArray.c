#include<stdio.h>
int main(){
    int i,brr[5];
    int arr[5] = {23,67,89,56,43};
    for(i=0;i<5;i++){
        brr[i]=arr[5-1-i];
        printf("%d ",brr[i]);
    }
    return 0;
}