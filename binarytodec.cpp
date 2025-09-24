#include<iostream>
using namespace std;

int main(){
   int ans=0,pow=1,binary_num,rem;
   
   cout<<"enter the binary number"<<endl;
   cin>>binary_num;

   while(binary_num>0){
    rem=binary_num%10;//extract last digit
    ans=ans+(rem*pow);
    pow=pow*2;
    binary_num=binary_num/10;//remove last digit
  
}
   cout<<"Yourdecimal number is"<<ans<<endl;

    return 0;
}