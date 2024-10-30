#include<stdio.h>
#define N 5

int queue[N];
int front = -1,rear=-1;

void enqueue(){
    if(rear==N-1){
        printf("Overflow condition !");
    }

    else if(front == -1 && rear == -1){
        front=rear=0;
        int data;
        printf("\n Enter data:");
        scanf("%d",&data);
        queue[rear]=data;
    }

    else{
        rear ++;
        int data;
        printf("\n Enter data:");
        scanf("%d",&data);
        queue[rear]=data;
    }
}

void display(){
    if(front==-1 && rear==-1 ){
        printf("\n Queue is empty.");
    }
    else{
        int i;
        for(i=front;i<rear+1;i++){
            printf("%d\t",queue[i]);
        }
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("The queue is empty.");
    }
    else if(front==rear) {
        front = rear = -1; 
    }
    else{
        printf("\n %d is deleted.",queue[front]);
        front ++;
    }
}

int main(){
    int ch,w=0;
    printf("\n Enter 1 to insert data in queue.");
    printf("\n Enter 2 to delete data from queue.");
    printf("\n Enter 3 to display items of queue.");
    printf("\n Enter 4 to exit.");
    while(w==0){
        printf("\n Enter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1 :
                enqueue();
                break;
            case 2 :
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
        }
    }
    return 0;
}
