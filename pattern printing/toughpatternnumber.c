#include<stdio.h>
int main()
{
    int i,j,k,l,n,q;
    printf("\n Enter the no of lines:");
    scanf("%d",&n);
    for(q=1;q<=2*n+1;q++){
        
        printf("%d",q);
    }
    printf("\n");
    int nsp=1,nst=n;
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        for(k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(l=n;l>=nst;l--){
            printf("%d",a);
            a++;
        }
        nsp=nsp+2;
        nst--;
        printf("\n");
    }
    return 0;
}