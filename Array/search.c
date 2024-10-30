#include<stdio.h>
int main(){
    int i,x,n,arr[7]={34,67,89,23,59,20,45};
    printf("\n Enter any number x:");
    scanf("%d",&x);
    int check=0; // it means x is not present in the array
    for(i=0;i<7;i++){
        if(arr[i]== x){
            check=1; // it means x is in the array
            break;
        }   
    }
    if(check==1)
    printf("\n %d is present inside the array and its index is %d",x,i);
    else 
    printf("\n %d is not in the array",x);
    return 0;
}