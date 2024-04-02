/*
print the pattern when no. of rows=4
   
   4
   4 3
   4 3 2
   4 3 2 1

*/

#include<iostream>
using namespace std;
int main(){
    int i,j,row;
    cout<<"enter no. of rows\n";
    cin>>row;
    for(i=row;i>=1;i--){
        for(j=row;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

}