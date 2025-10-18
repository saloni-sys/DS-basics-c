#include<stdio.h>
#include<stdlib.h>

struct queue{
int data,front,rear,size;
int*arr;

};
int enqueue(struct queue *q);
int dequeue(struct queue *q);
void display(struct queue *q);
int isfull(struct queue *q);
int isempty(struct queue *q);


int main(){
      struct queue *q= (struct queue*)malloc(sizeof(struct queue));
    q->size=3;
    q->front=q->rear=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    do{
        printf("Enter 0 for enqueue mode\nEnter 1 for dequeue mode\n Enter 2 for display \n Enter 3 for exit");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 0:
            printf("You are in enqueue mode \n");
            enqueue(q);
            break;
            case 1:
            printf("You are in dequeue mode\n");
            dequeue(q);
            break;
            case 2:
            printf("You are  in display mode\n");
            display(q);
            break;
            case 3:
            printf("You are in exit mode");
            exit(0);
            default:
            printf("Enter correct choice");

        }
    }
        while(1);
        return 0;

}
int enqueue(struct queue *q){
int data;
    if(isfull(q)){
        printf("queue overflow");
    }else{
         printf("Enter the data to enqueue: ");
        scanf("%d", &data);
        q->rear=q->rear+1;
        q->arr[q->rear]=data;
    }
}

int dequeue(struct queue*q){
    
    if(isempty(q)){
        printf("this queue is empty");
    }else{
       int val=q->arr[q->]
       
    }
    

return 0;
}
int isfull(struct queue*q){
if(q->rear==q->size-1){
    return 1;
}else{
    return 0;

}

}

int isempty(struct queue*q){
if(q->front==q->rear){
    return 1;
}else{
    return 0;


}
}
void display(struct queue *q) {
    if (isempty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front + 1; i <= q->rear; i++) {
        printf("%d--> ", q->arr[i]);
    }
    printf("\n");
}

