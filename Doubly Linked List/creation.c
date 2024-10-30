#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head , *tail , *temp;

void create(){
    int choice=1;
    head=NULL;
    struct node *newnode;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        int data;
        printf("\n Enter the data:");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        printf("\n If you want to continue press 1 otherwise press 0:");
        scanf("%d",&choice);
    }
}
void display(){
    temp=head;
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
int main(){
    int ch,w=0;
    printf("\n Enter 1 to insert data in LL.");
    printf("\n Enter 2 to display data from LL.");
    while(w==0){
        printf("\n  Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            default:
                printf("\n Invalid");
                break;
        }
    }
    return 0;
    
}