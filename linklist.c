#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;


};
struct node*start=NULL;
void create();
void display();
void insert();
void insert_At_End();
int main(){
    do{
        printf("Enter 0 for creation mode\nEnter 1 for insert mode\nEnter 2 for display mode\n Enter 3 for exit \n");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 0:
            printf("You are in creation mode \n");
            create();
            break;
            case 1:
            printf("You are in insert mode\n");
            insert();
            break;
            case 2:
            printf("You are  in display mode\n");
            display();
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

void create(){
    int val;
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("Memory could not be allocated");
    }
    else{
        printf("Enter the data to be inserted");
    }
    scanf("%d",&temp->data);
    temp->next=NULL;
    start=temp;
}
void display(){
    struct node*temp1;
    temp1=start;
    while(temp1!=NULL){
        printf("%d",temp1->data);
        temp1=temp1->next;
    }

}
void insert(){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("memory could not be alloacated");

    }else{
        printf("Enter the data to be inserted");

    }
    scanf("%d",&temp->data);
    temp->next=start;
    start=temp;
    
}

void insert_At_middle(){
    struct node*temp1=start;
    while(temp1->data!=20){
        temp1=temp1->next;
    }
   struct node* temp=(struct node*)malloc(sizeof (struct node));
   if(temp==NULL){
    printf("Memory could not be allocated");
   }
   else{
    printf("enter the data to be inserted");

   }
   scanf("%d",&temp->data);
   temp->next=temp1->next;
   temp1->next=temp;

}
void insert_At_End(){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
     if(temp==NULL){
        printf("memory could not be alloacated");

    }else{
        printf("Enter the data to be inserted");

    }
    scanf("%d",&temp->data);
    start->next=temp;
    temp->next=NULL;
}
void deleteNode(){
    
}
