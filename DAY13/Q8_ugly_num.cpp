/*
check whether the given number is ugly number or not*/
#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"enter the number\n";
    cin>>num;
    if(num==1){
    cout<<"ugly number";
    return 0;}
    else
    for(int i=2;i<num;i++){
        if(num%i==0){
            if(i!=2 || i!=3 || i!=5)
count++;
        }
    }
    if(count==0){
        cout<<"ugly number";
    }
    else
    cout<<"not ugly number";

}