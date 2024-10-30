#include<stdio.h>
int main(){
    int i,j,r,c;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    r=3;
    c=3;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int temp;
    printf("\n The transpose of the given matrix is--- \n");
    for(i=0;i<r;i++){
        for(j=i;j<c;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}