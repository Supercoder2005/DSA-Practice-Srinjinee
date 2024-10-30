#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("\n enter any number:");
    scanf("%d",&n);
    while(n>0){
        rev=rev*10;
        rev=rev+(n%10);
        n=n/10;
    }
    printf("\n The reversed no is %d", rev);
    return 0;
    
}