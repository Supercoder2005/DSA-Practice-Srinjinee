#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("\n Enter the no of rows:");
    scanf("%d", & r);
    printf("\n Enter the no of coloumns :");
    scanf("%d",& c);
    int arr[r][c];
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
    printf("\n");
    int max=arr[0][0];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    printf("\n The maximum element of the array =%d",max);
    int min=arr[0][0];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
    printf("\n The minimum element of the array =%d", min);
    return 0;
}