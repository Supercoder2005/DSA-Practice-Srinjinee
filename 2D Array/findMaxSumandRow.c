#include <stdio.h>
int main(){
    int i,j,arr[50][50],r,c;
    printf("\n enter the no rows:");
    scanf("%d",&r);
    printf("\n The no of coloumns:");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\n Enter element [%d][%d]:",i,j);
            scanf("%d",& arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum;
    int maxsum=0;
    int index=-1;
   
    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        if(maxsum<sum){
            maxsum=sum;
            index=i;
        }
    }
    printf("\n The maximum sum corresponds to the row %d & it is=%d",index,maxsum);
    return 0;
}