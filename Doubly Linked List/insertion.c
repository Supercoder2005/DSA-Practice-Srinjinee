#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*temp;

void create(){
    int data,n,i;
    head = NULL;
    printf("\n Enter the size of the doubly linked list :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
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
}

void insert_at_beginning(){
    if(head==NULL){
        printf("\n Linked list is not created !");
    }
    else{
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->prev = NULL;
        newnode->next = NULL;
        int data;
        printf("\n Enter the element that you want to insert at beginning:");
        scanf("%d",&data);
        newnode->data = data;
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    } 
}

void insert_at_anyPosition(){
    if(head == NULL){
        printf("\n The linked list is not created !");
    }
    else{
        int i,pos,data;
        printf("\n Enter the position where you want to insert a new node:");
        scanf("%d",&pos);
        if(pos<0){
            printf("\n Invalid position!");
        }
        else if(pos == 1){
            insert_at_beginning();
        }
        else{
            temp = head;
            for(i=1;i<pos;i++){
                temp = temp->next;
            }
            struct node *newnode;
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->prev = NULL;
            newnode->next = NULL;
            printf("\n Enter the data that you want to insert at position %d:",pos);
            scanf("%d",&data);
            newnode->data = data;

            newnode->next = temp;
            newnode->prev = temp->prev;
            temp->prev->next = newnode;
            temp->prev = newnode;
            temp = newnode;
        }
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
    int choice,i;
    while(1){
        printf("\n Enter 1 to create node.");
        printf("\n Enter 2 to display the doubly linked list.");
        printf("\n Enter 3 to insert element at the beginning of the list.");
        printf("\n Enter 4 to insert element at the given position of the list.");
        printf("\n Enter 5 to exit.");
        printf("\n Enter your choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert_at_beginning();
                break;
            case 4:
                insert_at_anyPosition();
                break;
            case 5:
                exit(0);
            default:
                printf("\n Invalid choice , try again !");
        } 
    }
    return 0;
}