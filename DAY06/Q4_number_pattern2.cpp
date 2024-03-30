/*
print the pattern when the no. of rows & columns 
are given eg.rows=6,columns=5
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

*/
#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"enter the value of rows & columns\n";
    cin>>r>>c;
    for(i=1;i<=r;i++){
        for(j=c;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}