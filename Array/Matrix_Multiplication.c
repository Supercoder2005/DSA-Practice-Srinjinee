#include<stdio.h>
int main(){
    int i,j,k,r1,c1,r2,c2,a[50][50],b[50][50],c[50][50];
    printf("\n Enter the no of rows of 1st matrix:");
    scanf("%d",&r1);
    printf("\n Enter the no of coloumns of 1st matrix:");
    scanf("%d",&c1);
    //input 1st matrix from user
    printf("\n Enter elements on the 1st matrix---\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",& a[i][j]);
        }
    }
    printf("\n Enter the no of rows of 2nd matrix:");
    scanf("%d",&r2);
    printf("\n Enter the no of coloumns of 2nd matrix:");
    scanf("%d",&c2);
    //input 2nd matrix from user
    printf("\n Enter elements on the 2nd matrix---\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",& b[i][j]);
        }
    }
    // display the two matrix
    printf("\n The 1st matrix is:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n The 2nd matrix is:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    //condition checking for multiplication 
    if(c1!=r2){
        printf("\n the given matrices can not be multiplied");
    }
    else{
        // matrix multiplication code
        printf("\n The resultant matrix after multiplication is ---\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                c[i][j]=0; //initialise resultant matrix
                for(k=0;k<c1;k++){
                    c[i][j] = c[i][j] + a[i][k] * b[k][j] ;
                }
            }
            printf("\n");
        }
    }
    // print the resultant matrix
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}