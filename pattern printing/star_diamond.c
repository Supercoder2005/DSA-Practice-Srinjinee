#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("\n enter the no of lines:");
    scanf("%d",&n);
    int nst=1;
    int nsp=n/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        for(k=1;k<=nst;k++){
            printf("*");
        }
        if(i<(n/2)+1){
            nsp--;
            nst=nst+2;
        }
        else{
            nsp++;
            nst=nst-2;
        }
        printf("\n");  
    }
    return 0;
}