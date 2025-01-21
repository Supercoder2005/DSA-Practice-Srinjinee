#include <stdio.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

// Check if the queue is full
int isFull() {
    return ((rear + 1) % MAX_SIZE == front);
}

// Check if the queue is empty
int isEmpty() {
    return (front == -1);
}

// Enqueue (Add) an element to the circular queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1) front = 0; // Initialize front if it's the first element
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = value;
        printf("%d enqueued to queue\n", value);
    }
}

// Dequeue (Remove) an element from the circular queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1;
    } else {
        int value = queue[front];
        if (front == rear) {
            // Queue becomes empty after this operation
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        printf("%d dequeued from queue\n", value);
        return value;
    }
}

// Peek the front element of the queue
int peek() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    } else {
        return queue[front];
    }
}

// Display the queue
void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % MAX_SIZE;
        }
        printf("\n");
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


