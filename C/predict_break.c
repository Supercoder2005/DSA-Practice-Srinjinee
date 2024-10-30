#include<stdio.h>
int main()
{
    int x=4,y=0,z; // output 4 0 /3 1/
    while(x>=0){
        if(x==y)
        break;
        else 
            printf("\n %d%d",x,y);
            x--;
            y++;
    }
    return 0;
}