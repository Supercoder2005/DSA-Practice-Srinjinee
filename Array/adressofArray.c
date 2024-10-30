#include<stdio.h>
int main(){
    int i,arr[5]={2,5,6,8,9};
    for(i=0;i<5;i++){
        printf("\n %p",& arr[i]);
    }
    return 0;
}