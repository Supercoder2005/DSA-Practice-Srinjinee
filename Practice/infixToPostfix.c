#include<stdio.h>
#include<ctype.h>
#define Max 100
char stack[Max];
int top = -1;

void push(char data){
    if(top == Max-1){
        printf("\n Overflow Condition !");
    }
    else{
        top ++;
        stack[top]=data;
    }
}

char pop(){
    if(top == -1){
        printf("\n Underflow Condition!");
    }
    else{
        return(stack[top]);
        top --;
    }
}

int priority(char x){
    if(x=='('){
        return 0;
    }
    else if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='*' || x=='/'){
        return 2;
    }
    else if(x=='^'){
        return 3;
    }
}

void display(){
    if(top==-1){
        printf("\n Underflow condition!");
    }
    int i;
    for(i=top;i>=0;i--){
        printf("\t%c",stack[i]);
    }
}

int main(){
    char infix[50];
    char postfix[50];
    char *symbol;
    int p;
    printf("\n Enter the infix expression:");
    gets(infix);
    int i=0;

    symbol = &infix[0];
    while(*symbol != '\0'){
        if(isalnum(*symbol)){
            postfix[i]=*symbol;
            i++;
        }
        else if(*symbol == '('){
            push(*symbol);
        }
        else if(*symbol == ')'){
            while(((p)=pop()) != '('){
                postfix[i] = p;
                i++;
            }
        }
        else{
            if(priority(*symbol)<=priority(stack[top])){
                p=pop();
                postfix[i]=p;
                i++;
            }
            push(*symbol);
        }
        symbol ++;
    }
    while(top != -1){
        p=pop();
        postfix[i]=p;
        i++;
    }
    postfix[i] = '\0';
    printf("\n The postfix expression is : %s",postfix);
    return 0;
}