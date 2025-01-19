#include<stdio.h>
#define Max 100

int stack[Max];
int top = -1;

void push(){
    if(top == Max-1){
        printf("\n Overflow Condition!");
    }
    else{
        int data;
        top ++;
        printf("\n Enter the data:");
        scanf("%d",&data);
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

int main(){
    int choice,w=0;
    printf("\n Stack Operations:\n");
    printf("\n 1.Push");
    printf("\n 2.Pop");
    printf("\n 3.Exit");
    while(w==0){
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                w=1;
                break;
            default:
                printf("\n Invalid choice!");
        }
    }
    return 0;
}



