#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("\n Enter the number of lines:");
    scanf("%d",&n);
    printf("\n Enter the no of coloumns:");
    scanf("%d",&m);
    for(i=1;i<=n;i++){
        for (j=1;j<=m;j++){
            if(i==1 || j==m || i==n || j==1){
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}