/*
Write a program to convert Octal numbers to binary numbers
*/
#include<iostream>
using namespace std;
int main(){
    int num,mul=1,rem,ans=0;
    cout<<"enter the octal number\n";
    cin>>num;
    while(num!=0){
        rem=num%10;
        num=num/10;
        ans=ans+rem*mul;
        mul=mul*8;
                 }

     num=ans,mul=1,rem,ans=0;
    while(num!=0){
       rem=num%2;
       num=num/2;
       ans=mul*rem+ans;
       mul=mul*10;
    }
    cout<<"The octal equivalent is = "<<ans;

}