/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void bs();
int array1[10]={45,55,65,75,85,95,105,115,125,135};
int key,start=0,end=9,mid=0;
void main(){
    printf("\n Enter the number  to be searched ");
    scanf("%d",&key);
    bs();
    getch();
}
void bs(){
    if (start>end){//travelled the whole array but the element is not found
        printf("Element is not found");
        getch();
        exit(0);
    
    }else{
        mid=(start+end)/2;
        if(array1[mid]==key){
            printf("Element found at  %d",mid);
            getch();
            exit(0);
        }else{
            if(array1[mid]<key){
                start=mid+1;
                bs();
            }
            else{
                end=mid-1;
                bs();
            }
        }

    }
}