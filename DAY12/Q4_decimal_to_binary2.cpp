/*
Write a program to convert decimal 
numbers to binary numbers using a for loop.*/
#include<iostream>
using namespace std;
int main(){
    int num,rem,ans=0,mul=1;
    cout<<"enter the decimal number\n";
    cin>>num;
    for(;num!=0;){
       rem=num%2;
       num=num/2;
       ans=mul*rem+ans;
       mul=mul*10;
    }
    cout<<"The binary equivalent is = "<<ans;

}