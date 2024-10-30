#include<stdio.h>
int maximum(int,int);
int main(){
    int a,b,max;
    printf("\n Enter two no:");
    scanf("%d%d",&a,&b);
    max=maximum(a,b);
    printf("\n The maximum of the two numbers is = %d",max);
}
int maximum(int x, int y){
    if(x>y){
       return x;
    }
    else{
        return y;
    }
    
}