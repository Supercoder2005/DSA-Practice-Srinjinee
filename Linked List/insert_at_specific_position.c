#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    head = 0;
    int choice=1,count=0;
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
        count ++ ;
        temp=temp->next;
    }
    printf("\n the length of the LL is = %d",count);

    // enter a node at specific position given by the user means after that given position we are going to insert the node 
    int i=1,pos;
    struct node *ptr;
    printf("\n Enter the position after which you want to insert a node:");
    scanf("%d",&pos);
    if(pos>count){
        printf("\n Invalid position");
    }
    else{
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        ptr=(struct node *)(malloc(sizeof(struct node)));
        printf("\n Enter the data:");
        scanf("%d",& ptr->data);

        ptr->next=temp->next;
        temp->next=ptr;
    }

    printf("\n After insertion, the LL:");
    temp=head;
    while(temp != 0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}