#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("\n Enter the no of lines:");
    scanf("%d",&n);
    int nsp=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        int a=i-1;
        for(l=1;l<=i-1;l++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}