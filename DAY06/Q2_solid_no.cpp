/*
print the pattern when the no. of rows & columns 
are same eg,

1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the value of rows & columns\n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}