/*
Write a program to convert binary numbers
 to decimal numbers using a for loop
*/
#include<iostream>
using namespace std;
int main(){
    int num,mul=1,rem,ans=0;
    cout<<"enter the binary number\n";
    cin>>num;
    for(;num!=0;){
        rem=num%10;
        num=num/10;
        ans=ans+rem*mul;
        mul=mul*2;

}
    cout<<"equivalent decimal number is = "<<ans;
}
