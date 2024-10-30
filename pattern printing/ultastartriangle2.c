#include<stdio.h>
int main()
{
    int n,i,j,nst;
    printf("\n Enter the number of lines:");
    scanf("%d",&n);
    nst=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=nst;j++){
            printf("*");
        }
        nst -- ;
        printf("\n");
    }
    return 0;
}