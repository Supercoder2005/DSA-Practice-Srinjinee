#include<stdio.h>
int main(){
    int i,j,k,arr[8]={1,2,3,4,5,6,7,8};
    int x;
    printf("\n enter the value of x:");
    scanf("%d",&x);
    int totalpair=0;
    for(i=0;i<8;i++){
        for(j=i+1;j<8;j++){
            for(k=j+1;k<8;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                totalpair ++;
                printf("(%d,%d,%d)", arr[i],arr[j],arr[k]);
                }
            }  
        }
    }
     printf("\n The total no of triplets whose sum is equal to %d is =%d ",x,totalpair);
     return 0;
}