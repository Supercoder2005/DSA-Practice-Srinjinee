# include<stdio.h>
# define N 5 

int CirQueue[N];
int front = -1,rear=-1;

void enqueue(){
    if(front==-1 && rear==-1){
        front=rear=0;
        int data;
        printf("\n Enter data:");
        scanf("%d",&data);
        CirQueue[rear]=data;
    }
    else if ((rear+1)%N == front){
        printf("\n The Circular queue is full.");
    }
    else{
        rear=(rear+1)%N ;
        int data;
        printf("\n Enter data:");
        scanf("%d",&data);
        CirQueue[rear]=data;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("\n The Circular queue is Empty,Under flow condition.");
    }
    else if(((rear+1)%N)==front){
        front = rear = -1;
    }
    else{
        printf("\n %d is deleted.",CirQueue[front]);
        front = (front+1)%N ;

    }
}

void display(){
    int i=front;
    if(front==-1 && rear==-1){
        printf("\n The queue is empty.");
    }
    else{
        while(i != rear){
            printf("%d\t",CirQueue[i]);
            i = (i+1)%N;
        }
        printf("%d\t",CirQueue[rear]);
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
