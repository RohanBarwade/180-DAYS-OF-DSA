/*
Even and Positive Number: Write a program that prints “YES”
if a given number is both even and positive, 
otherwise it will print “NO”.
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the num\n";
    cin>>num;
    if((num>0) && (num%2==0)){
        cout<<"Yes";
    }
    else
    cout<<"No";
}