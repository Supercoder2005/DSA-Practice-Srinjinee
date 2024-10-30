#include<stdio.h>
int main()
{
int i,j,n;
printf("\n Enter the no of lines:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    int nst=1;
    for(j=1;j<=i;j++){
        printf("%d",nst);
        nst=nst+2;
    }
    printf("\n");
}
return 0;
}
