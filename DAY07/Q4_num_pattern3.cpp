/*
print the pattern when no. of rows=4
    1
    2 1
    3 2 1
    4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){
int row,i,j;
cout<<"enter no of rows\n";
cin>>row;
for(i=1;i<=row;i++){
    for(j=i;j>=1;j--){
        cout<<j<<" ";
    }
    cout<<"\n";
}

}