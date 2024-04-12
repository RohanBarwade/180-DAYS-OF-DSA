/*
print the cube of a number*/
#include<iostream>
using namespace std;
double fact(int n){
   double ans=1;
   for(int i=1;i<=n;i++){
    ans=ans*i;
   }
   return ans;
}
int main(){
    int num;
    double ans;
    cout<<"enter the number\n";
    cin>>num;
    ans=fact(num);
    cout<<num<<"! = "<<ans;
}