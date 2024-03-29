/*
calculate the power of number */
#include<iostream>
using namespace std;
int main(){
int i,base,pow,ans=1;
cout<<"enter the base\n";
cin>>base;
cout<<"enter the pow\n";
cin>>pow;
for(i=1;i<=pow;i++){
    ans=ans*base;

}
cout<<base<<" raise to "<<pow<<" = "<<ans;
}