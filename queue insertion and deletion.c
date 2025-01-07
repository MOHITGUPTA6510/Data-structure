#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;

int enqueue(int value){
    if (rear == SIZE -1){
        printf("the queue is full , cannot be enqueue");
    }
    else{
        if(front == -1){
            front = 0 ;
        }
        rear ++;
        queue[rear] = value;
        printf("enqueue value %d \n", value);
    }
}
int dequeue(){
    if(front == -1 || front > rear){
        printf("\nthe queue is empty , cannot dequeue ");
        return -1 ;
    }
    else{
        int value = queue[front];
        front ++;
        return value ;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    printf("\ndequeue %d",dequeue());
    printf("\ndequeue %d",dequeue());
    printf("\ndequeue %d",dequeue());
    printf("\ndequeue %d",dequeue());
    printf("\ndequeue %d",dequeue());
    printf("\ndequeue %d",dequeue());

}
