#include<stdio.h>
int main(){
    int i,j,arr[8]={1,2,3,4,5,6,7,8};
    int x;
    printf("\n enter the value of x:");
    scanf("%d",&x);
    int totalpair=0;
    for(i=0;i<8;i++){
        for(j=i+1;j<8;j++){
            if(arr[i]+arr[j]==x){
            totalpair ++;
            printf("(%d,%d)", arr[i],arr[j]);
            }
        }
    }
     printf("\n The total no of pairs whose sum is equal to %d is =%d ",x,totalpair);
     return 0;
}