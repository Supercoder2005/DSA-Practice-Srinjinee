#include<stdio.h>
void rev(int arr[]){
    int i=0,j=4; //i denotes the first and j denotes the last index of array
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return ;
}
int main(){
    int i,j,arr[5]={1,2,3,4,5};
    printf("\n The reversed array is : ");
    rev(arr);
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}