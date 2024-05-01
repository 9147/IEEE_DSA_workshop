// implementation of queue with linked list

#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue(){
    if(front == NULL){
        printf("Queue is empty\n");
        return;
    }
    if(front == rear){
        front = rear = NULL;
    }
    else{
        struct Node* temp = front;
        front = front->next;
        free(temp);
    }
}

int peek(){
    if(front == NULL){
        printf("Queue is empty\n");
        return -1;
    }
    return front->data;
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
