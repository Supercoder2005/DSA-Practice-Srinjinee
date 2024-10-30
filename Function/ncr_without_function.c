#include<stdio.h>
int main(){
    int n,r,i;
    printf("\n Enter the value of n:");
    scanf("%d",&n);
    printf("\n Enter teh value of r:");
    scanf("%d",&r);
    int nfact=1;
    for(i=2;i<=n;i++){
        nfact=nfact*i;
    }
    int rfact=1;
    for(i=2;i<=r;i++){
        rfact=rfact*i;
    }
    int nrfact=1;
    for(i=2;i<=n-r;i++){
        nrfact=nrfact*i;
    }
    int ncr = nfact/(rfact * nrfact);
    printf("\n the ans is %d",ncr);
    return 0;
}