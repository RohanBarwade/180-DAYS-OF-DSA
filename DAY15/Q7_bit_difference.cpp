/*
You are given two numbers A & B .The task is to count the number of bits needed
to be flipped to convert A to B*/
#include<iostream>
using namespace std;

int Diff(int m,int n){
    int rem1,rem2,count=0;
    while(m || n){
        rem1=m%10;
        rem2=n%10;
        if(rem1!=rem2)
        count++;
        m=m/10;
        n=n/10;

    }
    return count;
}
int bin(int num){
    int ans=0,rem,mul=1;
while(num!=0){
        rem=num%2;
        num=num/2;
        ans=rem*mul+ans;
        mul*=10;

    }
    return ans;
}
int main(){
    int A,B;
    cout<<"enter two numbers\n";
    cin>>A>>B;
    
    A=bin(A);
    B=bin(B);
    
    cout<<Diff(A,B);



    
}