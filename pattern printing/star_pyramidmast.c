#include<stdio.h>
int main()
{
    int i,j,k,l,q,n;
    printf("\n Enter the no of lines:");
    scanf("%d",&n);
    int nsp=1,nst=n;
    for(q=1;q<=2*n+1;q++){
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=nst;j++){
            printf("*");
        }
        for(k=1;k<=nsp;k++){
            printf(" ");
        }
        for(l=1;l<=nst;l++){
            printf("*");
        }
        nsp=nsp+2;
        nst--;
        printf("\n");
    }
}