// implement stack with linked list
#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = top;
    top = temp;
}

void pop(){
    if(top == NULL){
        printf("Stack Underflow\n");
        return;
    }
    struct Node* temp = top;
    top = top->next;
    free(temp);
}

int peek(){
    if(top == NULL){
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

int main(){
    push(1);
    push(2);
    push(3);
    printf("%d\n",peek());
    pop();
    printf("%d\n",peek());
    pop();
    printf("%d\n",peek());
    pop();
    printf("%d\n",peek());
    pop();
    return 0;
}