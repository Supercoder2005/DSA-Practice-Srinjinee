#include<stdio.h>
int main(){
    int arr[7]={2,8,9,5,9,7,9};
    int i,j;
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                printf("\n %d is the duplicate element of the array",arr[i]);
                break;
            }
        }
    }
    return 0;
}