#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\n enter the no of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d ",j);
            }
            else{
                char ch=(char)(a+64);
                printf("%c ",ch);
            }
            a++;
        }
        printf("\n");
    }
    return 0;
}