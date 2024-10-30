#include<stdio.h>
int main()
{
    int i,j,k,l,n,q;
    printf("\n Enter the no of lines:");
    scanf("%d",&n);
    for(q=1;q<=2*n+1;q++){
        char ch=(char)(q+64);
        printf("%c",ch);
    }
    printf("\n");
    int nsp=1,nst=n;
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=nst;j++){
            char ch1=(char)(a+64);
            printf("%c",ch1);
            a++;
        }
        for(k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(l=1;l<=nst;l++){
            char ch2=(char)(a+64);
            printf("%c",ch2);
            a++;
        }
        nsp=nsp+2;
        nst--;
        printf("\n");
    }
    return 0;
}