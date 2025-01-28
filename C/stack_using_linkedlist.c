#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* top=NULL;

void push(int element){
    //1.create a new node
    struct Node* newNode;
    newNode = malloc(sizeof(struct Node));
    if(newNode==NULL){

    }else{
        newNode -> data = element;
        newNode -> next = NULL;
        //2.put the address of the first node as the next of the new node
        newNode -> next = top;
        //3.update the top pointer 
        top = newNode;
    }

}
void pop(){
    struct Node* temp;
    temp = top;
    if(temp==NULL){
        printf("Underflow: stack is empty.");
    }else{
        top = top -> next;
        // temp = NULL;
        free(temp);
    }
}
void display(){
    struct Node* temp;
    temp = top;
    while(temp){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main(){
    push(11);
    push(12);
    display();
    printf("\n");
    pop();
    pop();
    // pop();
    display();
    return 0;
}