#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;

int is_full(){
    if(rear == SIZE-1){
        printf("the queue is full, cannot be enqueue\n ");
    }
}
int is_empty(){
    if(front == -1 || front > rear){
        printf("the queue is empty , cannot be dequeue\n");
    }
}
int enqueue(int value){
    if(front == -1){
        front =0;
    }
    rear ++;
    queue[rear]=value;
    printf("Enqueue element %d\n", value);
}
int dequeue(){
    int value = queue[front];
    front ++;
    printf("dequeue elememt %d\n", value);
}
int main(){
    is_empty();
    enqueue(10);
    enqueue(50);
    enqueue(40);
    enqueue(30);
    enqueue(20);
    is_full();
    dequeue();
}
