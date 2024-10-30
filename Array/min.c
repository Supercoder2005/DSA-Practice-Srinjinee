#include<stdio.h>
int main(){
    int i;
    int arr[4]= {34,6,723,68};
    int min=arr[0];
    for(i=0;i<4;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("\n The minimum no is = %d",min);
    return 0;
}