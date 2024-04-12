/*
check whether the given number is prime or not*/
#include<iostream>
using namespace std;
bool prime(int n){
    if(n<2)
    return 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        return 0;

    }
    return 1;

}
int main(){
    int num;
    bool ans;
    cout<<"enter the number\n";
    cin>>num;
    ans=prime(num);
    if(ans==1){
        cout<<num<<" is prime";
    }
    else
    cout<<num<<" is not prime";
}