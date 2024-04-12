/*
Reverse a number n using Function, Constraints: -5000<=n<=5000*/
#include<iostream>
using namespace std;
void reverse(int n){
    int ans=0,rem;
    while(n!=0){
        rem=n%10;
        n=n/10;
        ans=ans*10+rem;
        
    }
    cout<<"revrse of number is "<<ans;

}
int main(){
    int num;
    cout<<"enter the number\n";
    cin>>num;
    reverse(num);
}