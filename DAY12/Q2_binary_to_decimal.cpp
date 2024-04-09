/*
print the equivalent decimal number of given binary number*/
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
    cout<<"equivalent decimal number is = "<<ans;

}