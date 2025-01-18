#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*temp;

void create(){
    int data;
    head = NULL;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data :");
    scanf("%d",&data);
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = NULL;
    if(head == NULL){
        temp = head = newnode;
    }
    else{
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
}

void display(){
    temp = head;
    while(temp != NULL){
        printf("\t%d",temp->data);
        temp = temp->next;
    }
}

int main(){
    int choice,n,i;
    while(1){
        printf("\n Enter 1 to create node.");
        printf("\n Enter 2 to display the doubly linked list.");
        printf("\n Enter 3 to exit.");
        printf("\n enter your choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\n Enter the size of the doubly linked list :");
                scanf("%d",&n);
                for(i=0;i<n;i++){
                    create();
                }
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
                printf("\n Invalid choice , try again !");
        } 
    }
    return 0;
}