#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1; // true
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("Stack Overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }

}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow\n");
        return -1;
    }
    else{
        int value=ptr->arr[ptr->top];
        ptr->top=ptr->top-1;
        return value;
    }

}
int main()
{

    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));//assign memory to array
    printf("stack has been created successfully\n");
    push(s,65);
    push(s,66);
    push(s,67);
    push(s,68);
    push(s,69);
    push(s,70);
    push(s,71);
    push(s,72);
    push(s,73);
    push(s,74);//pushed 10th element
    push(s,75);//Stack overflow since the size of the stack is 10;
    
    

   printf("%d\n",isFull(s));
   printf("%d\n",isEmpty(s));

   printf("Popped %d from the stack\n",pop(s));
   printf("Popped %d from the stack\n",pop(s));
    
   
    return 0;
}