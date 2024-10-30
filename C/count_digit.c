#include<stdio.h>
int main()
{
    int n,count=0;
    printf("\n Enter any number");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count ++ ;
    }
    printf("\n %d",count);
    return 0;
}