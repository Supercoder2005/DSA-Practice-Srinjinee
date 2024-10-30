#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter three numbers:");
    scanf("%d%d%d,&a,&b,&c");
    if(a>b){
        if(a>c){
            printf("\n a=%d is the greatest",a);
        }
        else{
            printf("\n c=%d is the greatest",c);
        }  
    }
    else{
        if(b>c){
            printf("\n b=%d is the greatest",b);
        }
        else{
            printf("\n c=%d is the greatest",c);
        }
    }
    return 0;
}