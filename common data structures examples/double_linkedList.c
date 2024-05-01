// implementation of double linkedList

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL;

void insertAtHead(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = head;
    if(head != NULL){
        head->prev = temp;
    }
    head = temp;
}

void insertAtTail(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        temp->prev = NULL;
        head = temp;
        return;
    }
    struct Node* temp1 = head;
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp;
    temp->prev = temp1;
}

void deleteAtHead(){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}

void deleteAtTail(){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
}

void print(){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    insertAtHead(1);
    insertAtHead(2);
    insertAtHead(3);
    print();
    insertAtTail(4);
    insertAtTail(5);
    insertAtTail(6);
    print();
    deleteAtHead();
    print();
    deleteAtTail();
    print();
    return 0;
}