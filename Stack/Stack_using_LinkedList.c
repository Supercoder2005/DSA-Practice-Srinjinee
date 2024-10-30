#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;

void push(){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    int data;
    printf("\n Enter data:");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    
    newnode->next=top;
    top=newnode;
}

void display(){
    if(top==0){
        printf("Empty stack");
    }
    struct node *temp=top;
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

void peek(){
    if(top==NULL){
        printf("\n Stack under flow");
    }
    else{
        printf("\n Top most element is : %d",top->data);
    }
}

void pop(){
    struct node * temp=top;
    if(top==NULL){
        printf("\n Empty stack");
    }
    else{
        printf("\n %d is popped",top->data);
        top=top->next;
        free(temp);
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