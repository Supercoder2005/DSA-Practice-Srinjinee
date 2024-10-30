#include<stdio.h>
int main(){
    int i;
    int arr[7]={ -5,-9,-2,-89,-45,-12,-90 };
    int max=arr[0];
    for(i=0;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("\n The maximum element of the array is =%d",max);
    return 0;
}