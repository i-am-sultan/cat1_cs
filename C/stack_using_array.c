#include <stdio.h>
int stack[5];
int top=-1;
int size=sizeof(stack)/sizeof(int);
void push(int element){
    if(top==size-1){
        printf("Overflow: Stack is full");
    }else{
        top = top + 1;
        stack[top]=element;
    }
}
void pop(){
    if(top==-1){
        printf("Underflow: stack is empty.");
    }else{
        top = top - 1;
    }
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
}
int main(){
    push(12);
    push(13);
    push(13);
    push(13);
    push(13);
    push(13);
    pop();
    pop();
    pop();
    display();
    return 0;
}