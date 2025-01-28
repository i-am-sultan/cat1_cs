#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* front=NULL;
struct Node* end=NULL;
void enque(int element){
    struct Node* newNode;
    newNode = malloc(sizeof(struct Node));
    newNode -> data = element;
    newNode -> next = NULL;
    if(front == NULL && end == NULL){
        front = newNode;
        end = newNode;
    }else{
        newNode->next=end;
        end->data = newNode->data;
        end->next = NULL;
    }
}
void deque(){}
void display(){
    struct Node* temp;
    temp=front;
    while(temp){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main(){
    enque(11);
    enque(12);
    display();
    printf("\n");
    // deque();
    // display();
    return 0;
}