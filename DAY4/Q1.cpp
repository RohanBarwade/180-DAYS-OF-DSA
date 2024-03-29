/*Two numbers are given, print the bigger number, 
It is given that both numbers can’t be the same.*/

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter two numbers\n";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<num1<<" is biggest"; 
    }
    else
    cout<<num2<<" is biggest"; 
}