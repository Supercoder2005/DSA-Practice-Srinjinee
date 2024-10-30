#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*newnode,*tail,*temp;

void create(){
    int choice=1;
    head=NULL;
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next=NULL;
        newnode->prev=NULL;
        printf("\n Enter data:");
        scanf("%d",&newnode->data);
        
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            newnode->prev=temp;
            temp->next = newnode;
            temp=newnode;
        }
        printf("\n if you want to continue enter 1 otherwise enter 0:");
        scanf("%d",&choice);
    }
}

void display(){
    temp = head;
    while(temp != NULL){
        printf("%d \t",temp->data);
        temp = temp->next; // This line moves to the next node
    }
}

void del_from_beginning(){
    temp = head;
    head=temp->next;
    head->prev=NULL;
    free(temp);
}

void del_from_end(){
    temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
}

void del_from_pos(){
    int i=1,pos;
    printf("\n Enter the position from which you want to delete:");
    scanf("%d",&pos);
    if(pos==1){
        del_from_beginning();
    }
    else{
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        free(temp);
    }
}


int main(){
    create();
    printf("\n The linked list is ---- \n");
    display();
    del_from_beginning();
    printf("\n After deleting a node from beginning---\n");
    display();
    del_from_end();
    printf("\n After deleting a node from the end ---\n");
    display();
    del_from_pos();
    printf("\n After deleting a node from the specified position ---\n");
    display();

    return 0;
}