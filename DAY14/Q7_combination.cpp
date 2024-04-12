/*
Given two numbers n, r. Find nCr (Combination). 
Use Function here.  */
#include<iostream>
using namespace std;
double fact(int num){
    double c=1;
    for(int i=1;i<=num;i++){
        c=c*i;
    }
    return c;
}
int main(){
    int n,r;
    cout<<"enter n\n";
    cin>>n;
    cout<<"enter r\n";
    cin>>r;
    double result;
    result=fact(n)/(fact(r)*fact(n-r));
    cout<<n<<"c"<<r<<"="<<result;
}