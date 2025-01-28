#include <stdio.h>
int queue[5];
int size=sizeof(queue)/sizeof(int);
int front=-1, end=-1;
void enque(int element){
    if(end == size-1){
        printf("Overflow: queue is full.");
    }else{
        if((front == 0) && (end==0)){
            front++;
            end++;
            queue[end]=element;
        }else{
            end++;
            queue[end]=element;
        }
    }
}
void deque(){
    if(front == end){
        printf("Underflow: queue is empty");
    }else{
        front++;
    }

}
void display(){
    for(int i=front+1; i<=end; i++){
        printf("%d ",queue[i]);
    }
}
int main(){
    enque(11);
    enque(12);
    enque(13);
    deque();
    display();
    printf("\n");
    deque();
    deque();
    enque(100);
    display();

    return 0;
}