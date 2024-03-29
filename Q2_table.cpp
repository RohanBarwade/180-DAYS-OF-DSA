/*
print the table of user given number */
#include<iostream>
using namespace std;
int main(){
    int i,num;
    cout<<"enter the number\n";
    cin>>num;
    for(i=1;i<=10;i++){
        cout<<num<<'*'<<i<<'='<<num*i<<endl;
    }

}