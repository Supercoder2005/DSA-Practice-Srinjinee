#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*temp,*newnode;
void create(){
    head=NULL;
    int choice=1;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->next=NULL;
        newnode->prev=NULL;
        printf("\n Enter data:");
        scanf("%d",&newnode->data);
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
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
void inser_at_position(){
    int pos,i=1;
    printf("\n Enter the position after which you want to insert:");
    scanf("%d",&pos);
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n Enter data:");
    scanf("%d",&newnode->data);
    temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    newnode->prev=temp;
    temp->next=newnode;
}
void deletion(){
    int i=1,pos;
    printf("\n Enter the position from where you want to delete a node:");
    scanf("%d",&pos);
    temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    free(temp);
}
int main(){
    create();
    printf("\n The linked list is ---\n");
    display();
    inser_at_position();
    printf("\n After inserting a node at a specific position ---\n");
    display();
    deletion();
    printf("\n After deleting a node from a specified position---\n");
    display();
    return 0;
}