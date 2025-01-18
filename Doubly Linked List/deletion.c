#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*temp;
void create(){
    int data,i,n;
    printf("\n Enter the size of the doubly linked list:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter data:");
        scanf("%d",&data);
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = NULL;
        if(head==NULL){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
}

void display(){
    temp = head;
    while(temp!= NULL){
        printf("\t %d",temp->data);
        temp = temp->next;
    }
}

int main(){
    int choice;
    while(1){
        printf("\n Enter 1 to create the doubly linked list.");
        printf("\n Enter 2 to display.");
        printf("\n Enter 3 to delete from the beginning.");
        printf("\n Enter 4 to delete from a specific position.");
        printf("\n Enter 5 to delete from the end.");
        printf("\n Enter 6 to exit.");
        printf("\n Enter your choice:");
        scanf("%d",&choice); 
        switch(choice){
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("\n Invalid choice!");
        }
    }
}