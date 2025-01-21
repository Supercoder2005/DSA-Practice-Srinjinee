#include<stdio.h>
#include<stdlib.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(){
    int data;
    if(rear==N-1){
        printf("\n Overflow Condition !");
    }
    if(front == -1 && rear == -1){
        front = rear = 0;
        printf("\n Enter data to be inserted:");
        scanf("%d",&data);
        queue[rear]=data;
    }
    else{
        rear ++;
        printf("\n Enter data to be inserted:");
        scanf("%d",&data);
        queue[rear]=data;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("\n The queue is empty.");
    }
    else{
        int i;
        for(i=front;i<=rear;i++){
            printf("\t%d",queue[i]);
        }
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("\n Underflow Condition !");
    }
    if(front=rear){
        printf("\n The deleted data is : %d",queue[front]);
        front = rear = -1;
    }
    else{
        printf("\n The deleted data is : %d",queue[front]);
        front ++;
    }
}

int main(){
    int choice;
    printf("\n Queue operations!");
    printf("\n 1.Enqueue");
    printf("\n 2.Dequeue");
    printf("\n 3.Display");
    printf("\n 4.Exit");
    while(1){
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
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
                exit(0);
            default:
                printf("\n Invalid choice!");
                break;
        }
    }
    return 0;
}
