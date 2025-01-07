#include<stdio.h>
#define max 5

int stack[max];
int top = -1;

void push(int value){
    if(top < max -1){
        stack[++top] = value;
        printf("%d value push in stack\n", value);
    }
    else{
        printf("overflow the stack is full\n");
    }
}
int pop(){
    if(top >= 0){
        return stack[top--];
    }
    else{
        printf("\nunderflow the stack is empty");
        return -1;
    }
}
int main(){
    push(10);
    push(20);
    push(10);
    push(10);
    push(50);
    push(60);
    printf("the pop element is %d",pop());
    printf("\nthe pop element is %d",pop());
    printf("\nthe pop element is %d",pop());
    printf("\nthe pop element is %d",pop());
    printf("\nthe pop element is %d",pop());
    printf("\nthe pop element is %d",pop());
    return 0;
}
