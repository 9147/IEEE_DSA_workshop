// implementation of stack with array
#include <stdio.h>

#define MAX 1000

int stack[MAX];
int top = -1;

void push(int data){
    if(top == MAX-1){
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = data;
}

void pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        return;
    }
    top--;
}

int peek(){
    if(top == -1){
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
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