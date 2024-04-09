/*
Write a program to convert decimal numbers to Octal numbers.
*/
#include<iostream>
using namespace std;
int main(){
    int num,rem,ans=0,mul=1;
    cout<<"enter the decimal number\n";
    cin>>num;
    while(num!=0){
       rem=num%8;
       num=num/8;
       ans=mul*rem+ans;
       mul=mul*10;
    }
    cout<<"The octal equivalent is = "<<ans;

}
