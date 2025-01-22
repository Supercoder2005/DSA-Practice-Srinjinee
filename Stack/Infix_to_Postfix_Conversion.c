#include<stdio.h>
#include<ctype.h> // we use this header file to apply the predefined isalnum() function which checks whether the character is a alphabet or number
#define Max 100

char stack[Max]; // As i enter character type prefix expressions into the stack , we have to declare a character array
int top = -1;

void push(char data){
    if(top == Max-1){
        printf("\n Overflow Condition!");
    }
    else{
        top ++;
        stack[top] = data;
    }
}

char pop(){
    if(top == -1){
        printf("\n Underflow Condition!");
    }
    else{
        return(stack[top--]);
    }
}

int priority(char x){
    if(x=='(')
        return 0;
    else if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    else if(x=='^')
        return 3;
}

void display(){
    if(top == -1){
        printf("\n Underflow Condition !");
    }
    int i;
    for(i=top;i>-1;i--){
        printf("\t%c",stack[i]);
    }
}

int main(){
    char infix[50],postfix[50];
    int i=0;
    char *symbol; // pointer to point out each character of the infix expression
    char p;  // variable to store the topmost character after poppping out of the stack 
    printf("\n Enter the infix expression :");
    gets(infix);  // instead of scanf when we take string as a input we use gets()
    
    symbol = &infix[0];
    while(*symbol != '\0'){

        // checks if the symbol of the infix expression an operand or not 
        if(isalnum(*symbol)){ 
            //if input symbol is operand simply write it in the postfix expression
            postfix[i] = *symbol;
            i++;
        }

        // checks if the upcoming symbol of the infix expression is '('
        else if(*symbol == '('){
            push(*symbol);
        }

        // checks if the incoming symbol of the infix expression is ')'
        else if(*symbol == ')'){
            // then pop out the stack untill the top of the stack is '('
            while((p=pop()) != '('){
                postfix[i] = p;
                i++;
            }
        }

        // checks if the incoming symbol is operators then push it when it's priority is greater the top and pop the stack otherwise 
        else{
            while(priority(*symbol) <= priority(stack[top])){
                p = pop();
                postfix[i] = p;
                i++;
            }
            push(*symbol);
        }
    symbol ++;
    }

    // condition to check if extra elements are still left inside of the stack then simply pop them out and write inside of the postfix expression
    while(top != -1){
        postfix[i]=pop();
        i++;
    }

    postfix[i] = '\0';
    printf("\n The postfix expression is : %s",postfix);

    return 0;
}


