#include<stdio.h>
int main(){
    int arr[50][50],brr[50][50],crr[50][50],i,j,n;
    printf("\n Enter the order of the matrix:");
    scanf("%d",&n);
    printf("\n enter the elements of the first matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\n element [%d][%d]-",i,j);
            scanf("%d",& arr[i][j]);
        }
    }
    printf("\n enter the elements of the second matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\n element [%d][%d]-",i,j);
            scanf("%d",& brr[i][j]);
        }
    }
    printf("\n The first matrix is:");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
    }
    printf("\n The second matrix is:");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d\t",brr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            crr[i][j]=arr[i][j] + brr[i][j];
        }
        printf("\n The addition of two matrices is:");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d\t",crr[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
        return 0;
    }

}