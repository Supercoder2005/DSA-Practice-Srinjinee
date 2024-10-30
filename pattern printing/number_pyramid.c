#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("\n Enter the no of lines:");
    scanf("%d",&n);
    int nsp=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp=nsp-1;
        for(k=1;k<=2*i-1;k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}