#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
    int data;
    struct node *next;
    };
    
    struct node *head,*newnode,*temp;
    head = NULL;
    int choice=1;

    while(choice){
        newnode = (struct node *)(malloc(sizeof(struct node)));
        printf("\n Enter the data :");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("\n If you want to add one more node enter 1 otherwise 0:");
        scanf("%d",&choice);
    }
    int count=0;
    temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        count ++ ;
        temp=temp->next;
    }
    printf("\n The length of the LL is = %d",count);
    return 0;
}


