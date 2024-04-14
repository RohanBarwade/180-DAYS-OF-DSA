/*
Find trailing zero in a factorial*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number\n";
    cin>>num;
    int n=num;
    int count=0,ans=0;
    while(num>=5){
        ans=num/5;
        num/=5;
        count=count+ans;
        
    }
    
   
   cout<<"no of zero's in "<<n<<"! = "<<count;



}