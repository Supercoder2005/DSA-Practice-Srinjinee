#include<stdio.h>
int fun(int,int); // declaration
int main(){
    int x=5,y=7;
    fun(x,y);
    printf("\n x=%d,y=%d",x,y);
}
int fun(int x, int y){
    x=7;
    y=5;
    printf("\n x=%d,y=%d",x,y);
}