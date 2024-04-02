/*
print the pattern when no. of rows=4
    a
    b b
    c c c
    d d d d
    
*/
#include<iostream>
using namespace std;
int main(){
int row,i,j;
char ch;
cout<<"enter no of rows\n";
cin>>row;
for(i=1;i<=row;i++){
    ch='a'+i-1;
    for(j=1;j<=i;j++){
        cout<<ch<<" ";
    }
    cout<<"\n";
}

}