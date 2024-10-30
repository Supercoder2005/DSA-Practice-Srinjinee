#include<stdio.h>
#include<stdbool.h>
int main(){
    int i,j,arr[7]={1,7,8,4,7,1,8};
    for(i=0;i<7;i++){
        bool flag = false; // it means there is no duplicate element i.e(unique)
        for(j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                flag = true; // it means there is a duplicate element
            }
            if(flag==false){
                printf("\n The unique element is =%d",arr[i]);
                break;
            }   
        }
    }
    return 0; 

}