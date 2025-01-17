#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };

    struct node *head,*newnode,*temp;
    head = NULL;
    int choice = 1;

    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter data:");
        scanf("%d",&newnode->data);
        newnode->next = NULL;

        if(head==NULL){
            head = temp = newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("\n Do you want to continue ? (press 0 if No, 1 if Yes): ");
        scanf("%d",&choice);
    }
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}