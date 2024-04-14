/*
Write a function that takes the binary representation 
of a positive integer and returns the number of 
1 bits
it has (also known as the Hamming weight).*/
#include<iostream>
using namespace std;
int count(int n){
    int rem,c=0;
    while(n){
        rem=n%10;
        n=n/10;
        if(rem==1)
        c++;
        else
        continue;
    }
    return c;
}
int main(){
    int num,rem,mul=1;
    int bin=0;
    cout<<"enter the number\n";
    cin>>num;
    while(num!=0){
        rem=num%2;
        num=num/2;
        bin=rem*mul+bin;
        mul*=10;

    }
    
    cout<<"no of 1's bit = "<<count(bin);
}