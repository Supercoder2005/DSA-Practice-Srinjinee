#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter the length of three sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b > c && b+c > a && a+c >b){
        printf("\n Valid Triangle");
    }
    else {
        printf("\n Invalid Triangle");
    }
    return 0;

}