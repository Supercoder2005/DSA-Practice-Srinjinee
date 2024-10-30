#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
void create(){
    int choice = 1;
    head=NULL;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->next=NULL;
        printf("\n Enter data:");
        scanf("%d",&newnode->data);
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;  // it will connect the last node's next pointer to the head or first node 
        printf("\n If you want to continue press 1 or 0:");
        scanf("%d",&choice);
    }
}
void display(){
    temp=head;
    while(temp->next != head){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    printf("%d\t",temp->data);
}
    
int main(){
    create();
    display();
    return 0;
}