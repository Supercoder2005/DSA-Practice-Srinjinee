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

void insert_at_beginning(){
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data you want to insert at beginning:");
    scanf("%d",&new->data);
    new->prev=NULL;
    new->next=NULL;

    new->next=head;
    head->prev=new;
    head=new;
}

void insert_at_end(){
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data which you want to insert at the end:");
    scanf("%d",&ptr->data);
    ptr->prev=NULL;
    ptr->next=NULL;
    temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->prev=temp;
}

void insert_at_pos(){
    struct node *ptr1;
    ptr1=(struct node *)malloc(sizeof(struct node));
    int pos,i=1;
    printf("\n Enter the position after which you want to insert data:");
    scanf("%d",&pos);
    printf("\n Enter the data:");
    scanf("%d",&ptr1->data);
    temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    ptr1->next=temp->next;
    temp->next->prev=ptr1;
    ptr1->prev=temp;
    temp->next=ptr1;
}

int main(){

    create();
    printf("\n The linked list is --- \n");
    display();
    insert_at_beginning();
    printf("\n The linkedlist after insertion at beginning----\n");
    display();
    insert_at_end();
    printf("\n The linkedlist after insertion at end----\n");
    display();
    insert_at_pos();
    printf("\n The linkedlist after insertion at specific position----\n");
    display();

    return 0;
}