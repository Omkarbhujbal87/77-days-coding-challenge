#include<stdio.h>
#include<stdlib.h>
# define max 100
typedef struct{
    int arr[max];
    int top;
}stack;
int init(stack* s){
    return s->top=-1;
}
int isFull(stack* s){
    return s->top==max-1;
}
int isEmpty(stack *s){
    return s->top==-1;
}
void push(stack* s,int value){
    if(isFull(s)){
        printf("stack overflow\n");
        return;
    }
    s->arr[++(s->top)]=value;
}
void pop(stack* s){
    if(isEmpty(s)){
        printf("stack underflow\n");
        return;
    }
    s->arr[(s->top)--];
}
void peek(stack * s){
     if(isEmpty(s)){
        printf("stack underflow\n");
        return;
    }
    printf("%d",s->arr[s->top]);
}
void access(stack * s,int index){
     if(isEmpty(s)){
        printf("stack underflow\n");
        return;
    }
    printf("%d",s->arr[index]);
}
void displayStack(stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements (from top to bottom):\n");
    // Traverse the stack from top to bottom
    for (int i = s->top; i >= 0; i--) {
        printf("%d\n", s->arr[i]);
    }
    printf("\n");
}
int main() {
    stack stack;
    init(&stack);
    int choice,value,index;
    while (1)
    {
   
    printf("Stack menu:\n1.push.\n2.pop.\n3.peek.\n4.access by index.\n5.display.\n6.exit");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter value to push:\n");
        scanf("%d",&value);
        push(&stack,value);
        break;
    case 2:
        pop(&stack);
        break;
    case 3:
        peek(&stack);
        break;
    case 4:
        printf("Enter index to access:\n");
        scanf("%d",&index);
        access(&stack,index);
        break;
    case 5:
        displayStack(&stack);
        break;
    case 6:
        printf("Exited succesfully");
        return 0;
    }

    }

    return 0;
}