#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(){
    int data;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data:");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    if(front==0 &&rear==0){
        front=rear=newnode;
        rear->next=front;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void dequeue(){
    struct node * temp=front;
    if(front==0 && rear==0){
        printf("\n The queue is empty.");
    }
    else{
        printf("\n %d is deleted",front->data);
        front=front->next;
        rear->next=front;
        free(temp);
    }
}

void display(){
    struct node *temp=front;
    if(front==0 && rear==0){
        printf("\n Queue is empty.");
    }
    else{
        while(temp->next != front){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}

int main(){
    int ch,w=0;
    printf("\n Enter 1 to insert data in queue.");
    printf("\n Enter 2 to delete data from queue.");
    printf("\n Enter 3 to display items of queue.");
    printf("\n Enter 4 to exit.");
    while(w==0){
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                w=1;
                break;
            default:
                printf("Invalid choice.");
                break;
        }
    }
    return 0;
}
