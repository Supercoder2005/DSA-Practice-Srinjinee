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

void search(){
    int i=1,item;
    printf("\n Enter the item you want to search:");
    scanf("%d",&item);
    temp=head;
    while(temp != NULL){
        if(temp->data == item){
            printf("\n Element found at position : %d",i);
        }
        else{
            printf("\n Element not found");
        }
        temp=temp->next;
        i++;
    }
    
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

    search();
    

    return 0;
}