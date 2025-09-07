                        //code to find kth maximum element

#include <stdio.h>

int main() {
    
    int a[6]={4,1,5,2,3};
    int temp,k;
    for(int i=0;i<=5;i++){
        for(int j=0;j<5;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("array after sorting ");
    for(int i=0;i<=5;i++){
        printf("%d",a[i]);
    }
    printf("enter value of k for kth maximum");
    scanf("%d",&k);
    printf("%d",a[k-1]);// if array sorted in decending order (1st max=indx0 ,2nd max=idx 1 ,3rd max=idx2 so kth max=idx(k-1))

    return 0;
}