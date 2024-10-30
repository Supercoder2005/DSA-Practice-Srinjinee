#include<stdio.h>
int main(){
    int i,j,r,c,arr[50][50],brr[50][50];
    printf("\n Enter the no of rows:");
    scanf("%d",&r);
    printf("\n Enter the no of coloumns:");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d ",& arr[i][j]);
        }
    }
    printf("\n The user entered matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n The transpose matrix is :\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            brr[i][j]=arr[j][i];
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}