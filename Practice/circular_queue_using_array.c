#include<stdio.h>
#define N 5

int CirQueue[N];
int front = -1;
int rear = -1;

void enqueue(){
    int data;
    if(front == -1 && rear == -1){
        front = rear = 0;
        printf("\n Enter data:");
        scanf("%d",&data);
        CirQueue[rear]=data;
    }
    else if(front == (rear+1)%N){
        printf("\n Overflow Condition !");
        return;
    }
    else{
        rear = (rear+1)%N;
        printf("\n Enter data:");
        scanf("%d",&data);
        CirQueue[rear]=data;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("\n The Circular Queue is empty.");
    }
    int i = front;
    while(i!= rear){
        printf("\t%d",CirQueue[i]);
        i = (i+1)%N;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("\n Underflow Condition !");
    }
    else if(front == (rear+1)%N){
        printf("\n The deleted data is :%d",CirQueue[front]);
        front = rear = -1;
    }
    else{
        printf("\n The deleted data is :%d",CirQueue[front]);
        front = (front+1)%N; 
    }
}

int main(){
    
    printf("\n 1.Add an element into the queue.");
    printf("\n 2.Delete an element from the queue.");
    printf("\n 3.Display the circular queue.");
    printf("\n 4.Exit.");
    int ch,w=0;
    
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
                printf("\n Invalid choice.");
                break;
        }
    }
    return 0;
}


