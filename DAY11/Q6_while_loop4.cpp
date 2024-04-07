/*
Given a number n, find if it is prime or not, 
use a while loop and break here to solve it.
*/
#include<iostream>
using namespace std;
int main(){
    int n,i=2,c=0;
    cout<<"enter the number\n";
    cin>>n;
    if(n==1)
    {cout<<"not prime";
    return 0;}
    if(n==2)
    {cout<<"prime";
    return 0;}
    while(i<=n/2){
        if(n%i==0)
        {cout<<"not prime";
        c=1;
        break;}
        i++;
    }
    if(c==0){
        cout<<"prime";
    }

}