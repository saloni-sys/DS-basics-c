                                              //Maximum and Second maximum element

#include<stdio.h>
int main(){
    int a[6]={5,9,2,8,3,7};
int max=0;
int secmax=0;
    for(int i=0;i<6;i++){
        if(a[i]>max){
            secmax=max;
            max=a[i];

        }
        else if(a[i]>secmax&&a[i]<max){
            secmax=a[i];
        }
    }
    printf("Maximum element is %d\n",max);
    printf("Second Maximum element is %d",secmax);
    return 0;
}