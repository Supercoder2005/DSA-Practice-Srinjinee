#include<stdio.h>
int main(){
    int i,j,n,a[50][50];
    printf("\n Enter the size of the square matrix=");
    scanf("%d",&n);
    printf("\n Enter the elements of the matrix---\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    printf("\n The lower triangular matrix is---\n");
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>=j){
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
            else
            printf("0 ");
        }
        printf("\n");
    }
    printf("\n The sum of the elements of lower triangular matrix is = %d",sum);
    
    return 0;

}