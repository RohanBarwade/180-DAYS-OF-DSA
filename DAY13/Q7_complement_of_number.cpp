/*
print the complement of given decimal number*/
#include<iostream>
using namespace std;
int main(){
    int num,rem,bin=0,mul=1;
    cout<<"enter the number\n";
    cin>>num;
    while(num!=0){
        rem=num%2;
        num=num/2;
       
        if(rem==0){
            rem=1;
        }
        else
        rem=0;
        bin=rem*mul+bin;
        mul=mul*10;
}

int num2=bin,rem2,mul2=1,decimal=0;
while(num2!=0){

rem2=num2%10;
num2=num2/10;
decimal=rem2*mul2+decimal;
mul2=mul2*2;

}
cout<<decimal;

}