#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\n Enter the no of lines:");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}