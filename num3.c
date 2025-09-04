#include<stdio.h>


    int front,rear=0;
    int arr[50];
    //fun for enqueue
    void enqueue(int value){
        if(rear==50-1){
            printf(" Queue overflow");
        }
    
        else{
            if(front==-1){
                front=0;
                rear++;
                arr[rear]=value;
            }
        }
    }
//fun for display
    void display(){
        if(front == -1 && rear==-1){
            printf("queue is empty");

        }
        else{
            for(int i=front;i<=rear;i++){
                printf("%d",arr[i]);
            }
        }
    }

    int main(){
        enqueue(10);
        enqueue(20);
        enqueue(30);
        void display();
        return 0;
    }
    
