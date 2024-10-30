#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *tail;

void createCLL(){
    tail=NULL;
    int choice=1;
    while(choice){
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next=NULL;
        printf("\n Enter data:");
        scanf("%d",&newnode->data);
        if(tail==NULL){
            tail=newnode;
            tail->next=newnode;
        }
        else{
            //always remeber that try to update the right most link first
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        printf("\n Enter 1 if you want to continue else enter 0:");
        scanf("%d",&choice);
    }   
}

void display(){
    struct node *temp;
    temp=tail->next;  // in this circular LL always tail->next is equivalent to head 
    while(temp->next != tail->next){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
int main(){
    createCLL();
    display();
    return 0;
}