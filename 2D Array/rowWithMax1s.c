#include<stdio.h>
int main(){
    int count,i,j,arr[2][3]={{1,0,0},{1,1,1}};
    int max1count=0;
    int rowidx=-1;
    for(i=0;i<2;i++){
        count=0;
        for(j=0;j<3;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(max1count<count){
            max1count=count;
            rowidx=i;
        }
    }
    printf("\n The max no of 1 corresponds to the row:%d and there are %d 1s in that row.",rowidx,max1count);
    return 0;
}