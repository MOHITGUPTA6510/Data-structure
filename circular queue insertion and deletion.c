#include<stdio.h>
#define max 5

int queue[max];
int rear = -1 , front = -1;

int enqueue(int value){
    if(( (rear + 1) % max )== front){
        printf("overflow the queue is full");
    }
    else{
        if(front == -1){
            front =0;
        }
        rear = (rear + 1) % max;
        queue[rear]= value;
        printf("\nElement enqueue id %d", value);
    }
}

int dequeue(){
    if(front == -1){
        printf("\nunderflow the queue is empty");
        return NULL;
    }
    else{
        int value = queue[front];
        if(front == rear){
            front = rear = -1;
        }
        else{
            front=( front + 1 ) % max;
        }
        return value;
    }

}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    printf("\nthe dequeue element %d",dequeue());
    printf("\nthe dequeue element %d",dequeue());
    printf("\nthe dequeue element %d",dequeue());
    printf("\nthe dequeue element %d",dequeue());
    printf("\nthe dequeue element %d",dequeue());
    printf("\nthe dequeue element %d",dequeue());
}
