#include<stdio.h>
int main()
{
    int i=0,j=0;
    for(i=0;i<5;i++){
        printf("\n i=%d , j=",i);
    }
    for(j=0;j<5;j++){
        if(j==2)
        break;
        printf("\n %d",j);
    }
    return 0;
}