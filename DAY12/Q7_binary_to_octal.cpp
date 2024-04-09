/*
Write a program to convert binary to Octal numbers
*/
#include<iostream>
using namespace std;
int main(){
    int num,mul=1,rem,ans=0;
    cout<<"enter the binary number\n";
    cin>>num;
    while(num!=0){
        rem=num%10;
        num=num/10;
        ans=ans+rem*mul;
        mul=mul*2;
                 }

     num=ans,mul=1,rem,ans=0;
    while(num!=0){
       rem=num%8;
       num=num/8;
       ans=mul*rem+ans;
       mul=mul*10;
    }
    cout<<"The octal equivalent is = "<<ans;

}