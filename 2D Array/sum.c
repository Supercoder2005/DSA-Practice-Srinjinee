#include<stdio.h>
int main(){
    int i,j,n;
    printf("\n Enter the size of the square matrix :");
    scanf("%d",&n);
    int a[50][50],b[50][50],c[50][50];
    printf("\n Taking input for the first matrix-");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\n Enter element [%d][%d] :",i,j);
            scanf("%d",& a[i][j]);
        }
    }
    printf("\n Taking input for the second matrix-");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\n Enter element [%d][%d] :",i,j);
            scanf("%d",& b[i][j]);
        }
    }
    printf("\n The first matrix is --- \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n The second matrix is --- \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n The addition of the two matrices is---\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]= a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;  
}