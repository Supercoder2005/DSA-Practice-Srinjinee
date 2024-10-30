#include<stdio.h>
void check(int); // Function Declaration
void main(){ 
    int n;
    printf("\n Enter any positive integer:");
    scanf("%d",&n);
    check(n); // Function Calling
}
void check(int x){ // Function definition
    if(x%2==0) {
        printf("\n Even no");
    }
    else{
        printf("\n Odd no");
    }
}
