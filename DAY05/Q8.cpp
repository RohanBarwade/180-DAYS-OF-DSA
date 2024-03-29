/*Print Sum of square of first n natural number*/ 
#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter the last term of natural number\n";
    cin>>n;
    sum=(n*(n+1)*(2*n+1))/6;
    cout<<"final sum = "<<sum;
}