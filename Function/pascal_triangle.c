#include<stdio.h>
int fact(int n){
    int i,f=1;
    for(i=2;i<=n;i++)
    f=f*i;
    return f;
}
int combination(int n , int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n,i,j,k;
    printf("\n Enter the no of lines:");
    scanf("%d",&n);
    int nsp=n-1;
    for(i=0;i<=n;i++){
        for(j=0;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(k=0;k<=i;k++){
            int ick=combination(i,k);
            printf("%d ",ick);
        }
        printf("\n");
    }
    return 0;
}