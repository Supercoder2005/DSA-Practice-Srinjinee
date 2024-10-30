#include<stdio.h>
#define N 5 
int stack[N];
int top = -1;

void push(){
    if(top == N-1){
        printf("\n Overflow condition ");
    }
    else{
        top++;
        int data;
        printf("\n Enter data:");
        scanf("%d",&data);
        stack[top]=data;
    }
}

void pop(){
    if(top==-1){
        printf("\n Underflow condition");
    }
    else{
        printf("\n %d is deleted",stack[top]);
        top --;
    }
}

void peek(){
    if(top==-1){
        printf("\n Underflow condition");
    }
    else{
        printf("\n The top most element of the stack is:%d",stack[top]);
    }
}
void display(){
    if(top==-1){
        printf("\n The stack is empty.");
    }
    else{
        int i;
        for(i=top;i>=0;i--){
            printf("%d\t",stack[i]);
        }
    }
}

int main(){
    int ch,w=0;
    printf("\n Enter 1 to push");
    printf("\n Enter 2 to display");
    printf("\n Enter 3 to pop");
    printf("\n Enter 4 to peek");
    printf("\n Enter 5 to exit");
    while(w==0){
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                display();
                break;
            case 3:
                pop();
                break;
            case 4:
                peek();
                break;
            case 5:
                w=1;
                break;
            case 6:
                printf("\n Invalid choice");
                break;
        }
    }
    return 0;
}