/*
print the pattern when no. of rows=4
   * * * *
   * * *
   * *
   * 
*/
#include<iostream>
using namespace std;
int main(){
int row,i,j;
cout<<"enter no of rows\n";
cin>>row;
for(i=row;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<<"*"<<" ";
    }
    cout<<"\n";
}

}