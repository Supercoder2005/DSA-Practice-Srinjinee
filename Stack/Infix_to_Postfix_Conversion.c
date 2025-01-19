#include<stdio.h>
#define N 5

int stack[N];
int top = -1;

void push(){
    if(top == N-1){
        printf("\n Overflow Condition!");
    }
    else{
        int data;
        top ++;
        printf("\n Enter the data:");
        scanf("%d",data);
        stack[top] = data;
    }
}

void pop(){
    if(top == -1){
        printf("\n Underflow Condition!");
    }
    else{
        printf("\n The popped item is:%d",stack[top]);
        top--;
    }
}



