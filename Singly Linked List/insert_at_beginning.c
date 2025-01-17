#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    head = 0;
    int choice=1;
    while(choice){
        newnode=(struct node *)(malloc(sizeof(struct node)));  
        printf("\n Enter data:");
        scanf("%d",& newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("\n If you want to continue the list enter 1 otherwise enter 0:");
        scanf("%d",&choice);
    }
    printf("\n Before insertion the LL :");
    temp=head;
    while(temp != 0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    struct node *ptr;
    ptr=(struct node *)(malloc(sizeof(struct node)));
    int item;
    printf("\n Enter the data you want to insert at beginning of the LL:");
    scanf("%d",&ptr->data);
    ptr->next=head;
    head=ptr;
        
    printf("\n After insertion at the beginning the LL:");
    temp=head;
    while(temp != 0){
        printf("%d ",temp->data);
        temp=temp->next;
    }


    return 0;
}