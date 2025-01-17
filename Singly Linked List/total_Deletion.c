#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    };
    int count=0;
    struct node *head, *newnode, *temp;

void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d \t",temp->data);
        count++;
        temp=temp->next;
    }
}

//delete a node from beginnig
void delFromBegin(){
        if(head==NULL){
            printf("\n List is empty nothing to delete");
        }
        else{
            struct node *p;
            p=head;
            head=head->next;
            free(p);
        }
}
//delete a node from end
void delFromEnd(){
    struct node *prevnode;
    temp=head;
    while(temp->next!=NULL){
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=NULL;
        free(temp);
    }
    else{
        prevnode->next=NULL;
        free(temp);
    }
}

// delete a node from a specific position
void delFromPos(){
    int i=1,pos;
    struct node *nextnode;
    temp=head;
    printf("\n Enter the position from which you want to delete:");
    scanf("%d",&pos);
    // traverse temp variable to the previous node of the specified position
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}

int main(){

    head=NULL;
    int choice=1;

    while(choice){
        newnode = (struct node *) malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next = NULL;

        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("If you want to add more node enter 1 otherwise enter 0:");
        scanf("%d",&choice);
    }

    printf("\n The linked is ----\n");
    display();

    delFromBegin();
    printf("\n after deletion the linked list is----\n");
    display();

    delFromEnd();
    printf("\n after deletion the linked list is ---\n");
    display();

    delFromPos();
    printf("\n after deletion the linked list is ---\n");
    display();
    
    return 0;
}