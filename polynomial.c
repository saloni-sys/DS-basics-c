#include<stdio.h>
#include<stdlib.h>

struct poly{
    int exponent,coefficient;
    struct poly*next;
};
struct poly*create( struct poly*head){
    printf("enter the number of terms:");
    int n,i,coeff,expo;
    for(int i=0;i<n;i++){
        printf("enter the expo for term");
        scanf("%d",&expo);
        printf("enter the cofficient for term");
        scanf("%d",&coeff);
        head=insert(head,coeff,expo);
    }
}


struct poly*insert( struct poly*head,int co,int ex){
struct poly*newp=(struct node*)malloc(sizeof(struct poly));
newp->coefficient=co;
newp->exponent=ex;
newp->next=NULL;
if(ex>newp->exponent)


}

int main(){
struct poly*head=NULL;
    printf("enter the polynomial");
    head=create(head);
}