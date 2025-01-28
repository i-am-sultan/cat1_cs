#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* create_node(int element){
    struct node* new_node;
    new_node=malloc(sizeof(struct node));
    if(new_node==NULL){
        printf("Not able to allocate memory.");
        exit(0);
    }
    new_node->data=element;
    new_node->next=NULL;
    return new_node;
}
void display(){
    struct node* temp;
    temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void reverse(){
    struct node* p=NULL;
    struct node* q=head;
    struct node* r=q->next;
    while(q){
        r=q->next;
        q->next=p;
        p=q;
        q=r;
    }
    head=p;
}
int main(){
    head=create_node(11);
    head->next=create_node(22);
    head->next->next=create_node(33);
    // display();
    reverse();
    display();
    return 0;
}