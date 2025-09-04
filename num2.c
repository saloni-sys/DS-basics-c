#include<stdio.h>
int main(){
    int arr[50];
int key,flag=0;
    for(int i=0;i<=5;i++){
        printf("enter the element");
        scanf("%d",&arr[i]);
    }
    printf("enter the key");
    scanf("%d",&key);
    
for(int i=0;i<=5;i++){
    if(key==arr[i]){
        printf("element foud at %d",i);
        flag=1;
    }
}

if(flag==0){
    printf("element not found");
}

return 0;
}