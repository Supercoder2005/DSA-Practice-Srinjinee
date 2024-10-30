#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("\n Enter the no of lines:");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp --;
        for(k=1;k<=nst;k++){
            printf("*");
        }
        nst = nst +2;
        printf("\n");
    }
    return 0;
}