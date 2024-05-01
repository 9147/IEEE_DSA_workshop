// implementation of queue with array
#include <stdio.h>

#define MAX 1000

int queue[MAX];

int front = -1;
int rear = -1;


void enqueue(int data){
    if(rear == MAX-1){
        printf("Queue is full\n");
        return;
    }
    if(front == -1){
        front = 0;
    }
    queue[++rear] = data;
}

void dequeue(){
    if(front == -1){
        printf("Queue is empty\n");
        return;
    }
    if(front == rear){
        front = rear = -1;
    }
    else{
        front++;
    }
}

int peek(){
    if(front == -1){
        printf("Queue is empty\n");
        return -1;
    }
    return queue[front];
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    printf("%d\n",peek());
    dequeue();
    printf("%d\n",peek());
    dequeue();
    printf("%d\n",peek());
    dequeue();
    printf("%d\n",peek());
    dequeue();
    return 0;
}


