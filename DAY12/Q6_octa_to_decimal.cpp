/*
Write a program to convert Octal numbers to decimal numbers.
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
    cout<<"equivalent decimal number is = "<<ans;

}