#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*temp;

void create(){
    head = NULL;
    int choice=1;
    while(choice){
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;

        if(head == NULL){
            head=temp=newnode;
        }
        else{
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;
        }
        printf("\n if you want to continue enter 1 otherwise enter 0 :");
        scanf("%d",&choice);
    }
}

void display(){
    temp=head;
    while(temp != NULL){
        printf("%d \t",temp->data);
        temp = temp->next;
    }
}

int main(){
    create();
    printf("\n The linked list is --- \n");
    display();
    return 0;
}
