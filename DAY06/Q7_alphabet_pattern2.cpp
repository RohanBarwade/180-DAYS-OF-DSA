/*
print the pattern when the no. of rows & columns 
are given eg.rows=4,columns=5

a b c d e
a b c d e
a b c d e
a b c d e


*/
#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    char ch;
    cout<<"enter the value of rows & columns\n";
    cin>>r>>c;
    for(i=1;i<=r;i++){
         
        for(j=1;j<=c;j++){
            ch='a'+(j-1);
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}