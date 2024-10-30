#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("\n Enter the no of lines:");
    scanf("%d",&n);
    int nsp=n-1;
    for(i=1;i<=n;i++){// no of lines
        for(j=1;j<=nsp;j++){//no of spaces
            printf(" ");
        }
        nsp--;
        for(k=1;k<=i;k++){//for normal alphabet triangle
            char ch1=(char)(k+64);
            printf("%c",ch1);
        }
        int a=i-1;
        for(l=1;l<=i-1;l++){//for extra cheez
            char ch2=(char)(a+64);
            printf("%c",ch2);
            a--;
        }
        printf("\n");
    }
    return 0;
}