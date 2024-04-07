/*
Age Check: Implement a program that checks if a person is a teenager. 
A teenager is someone whose age is between 13 and 19 (inclusive).
*/
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age\n";
    cin>>age;
    if((age>=13) && (19>=age)){
        cout<<"Yes";
    }
    else
    cout<<"No";
}