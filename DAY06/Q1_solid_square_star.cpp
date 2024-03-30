/*
print the pattern when the no. of rows & columns 
are same eg,
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the value of rows & columns\n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
}