#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("\n Enter the no of lines:");
    scanf("%d",&n);
    int nsp=0,nst=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp++;
        for(k=1;k<=nst;k++){
            printf("*");
        }
        nst--;
        printf("\n");
    }
    return 0;
}