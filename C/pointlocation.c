#include<stdio.h>
int main()
{
    int x,y;
    printf("\n enter the coordinates:");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0){
        printf("\n point lies on the origin");
    }
    else if(x==0){
        printf("\n point lies on the y axis");
    }
    else if(y==0)
    {
        printf("\n point lies on the x axis");
    }
    else{
        printf("\n point does not lie on x or y axis");
    }
    return 0;
}