/*
print the pattern when no. of rows=4
   1 2 3 4
   1 2 3
   1 2
   1 
*/
#include<iostream>
using namespace std;
int main(){
int row,i,j;
cout<<"enter no of rows\n";
cin>>row;
for(i=row;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<"\n";
}

}