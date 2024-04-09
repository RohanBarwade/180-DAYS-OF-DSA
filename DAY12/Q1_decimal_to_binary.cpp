/*
print the equivalent binary number of given decimal number*/
#include<iostream>
using namespace std;
int main(){
    int num,rem,ans=0,mul=1;
    cout<<"enter the decimal number\n";
    cin>>num;
    while(num!=0){
       rem=num%2;
       num=num/2;
       ans=mul*rem+ans;
       mul=mul*10;
    }
    cout<<"The binary equivalent is = "<<ans;

}