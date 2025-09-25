#include<stdio.h>
int main(){
    int arr[6]={5,15,22,1,-15,24};
    int smallest=arr[0],minindex=0;
int largest=arr[0],maxindex=0;
    for(int i=1;i<6;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
         minindex=i;
    }
 
}
    for(int i=1;i<6;i++){
        if(arr[i]>largest){
            largest=arr[i];
         maxindex=i;
    }
 
}
printf("smallest element is %d at position %d\n",smallest,minindex);
printf("largest element is %d at position %d",largest,maxindex);
return 0;
}