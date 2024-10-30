# include<stdio.h>
# define N 5 

int queue[N];
int front=-1;
int rear=-1;

void enqueue(){
    if(rear==N-1){
        printf("\n Overflow condition.");
    }

    else if(front==-1 && rear==-1){
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

void dequeue(){
    if(front==-1 && rear==-1){
        printf("\n The queue is empty.");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("\n %d is deleted",queue[front]);
        front ++;
    }
}

void display(){
    int i;
    if(front==-1 && rear==-1){
        printf("\n The queue is empty.");
    }
    else{
        for(i=front;i<rear+1;i++){
            printf("%d\t",queue[i]);
        }
    }
}
int main(){
    int ch,w=0;
    printf("\n Enter 1 to insert data on queue");
    printf("\n Enter 2 to display the queue");
    printf("\n Enter 3 to delete a data from the queue");
    printf("\n Enter 4 to exit the queue");
    
    while(w==0){
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                enqueue();
                break;
            case 2:
                display();
                break;
            case 3:
                dequeue();
                break;
            case 4:
                w=1;
                break;
            default:
                printf("\n Invalid choice");
                break;
        }
    }
    return 0;
}