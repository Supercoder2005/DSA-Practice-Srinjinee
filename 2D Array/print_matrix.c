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
    printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}