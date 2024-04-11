/*
check whether the given number is palindrom or not */
#include<iostream>
using namespace std;
int  main(){
    int num,rem;
    double rev=0;
    cout<<"enter the num\n";
    cin>>num;
    int x=num;
    if(num<0){
        cout<<"not palindrom";
    }
    while(num!=0){
        rem=num%10;
        num=num/10;
        
        rev=rev*10+rem;

    }
    if(x==rev){
        cout<<"palindrom";}
        else
        cout<<"not a palindrom";
    }