/*
print the square root of given in integer form
*/
#include<iostream>
using namespace std;
int main(){
    int num,i=1;
    cout<<"enter number\n";
    cin>>num;
    while(i*i<=num){
        i++;
    }
    cout<<"sqrt("<<num<<")"<<"="<<i-1;
}