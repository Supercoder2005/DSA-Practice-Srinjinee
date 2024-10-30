#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;
    printf("\n %p",&x);
    int** y= &x;
    printf("\n %p",&y);
    printf("\n %d",*x);
    printf("\n %d",**y);
}