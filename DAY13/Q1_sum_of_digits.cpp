/*
print the sum of digits in a number 
eg 1234 
output should be 1
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number\n";
    cin>>num;
    while(num>9){
    int ans=0,rem;
    while(num!=0){
        rem=num%10;
        num=num/10;
        ans=ans+rem;

    }
    num=ans;
    }
    cout<<num;
    
}
