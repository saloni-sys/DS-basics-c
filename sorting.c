#include<stdio.h>
int main(){
    int arr[50];
    int temp;
    for(int i=0;i<=5;i++){
        printf("enter the element");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }

    printf("elements after sorting");
    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
