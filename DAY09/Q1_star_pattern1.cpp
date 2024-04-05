/*
print the pattern when no. of rows=5
    *
   ***
  *****
 *******
*********
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,row,space,star;
    cout<<"enter no of rows\n";
    cin>>row;
    for(i=1;i<=row;i++){
        for(space=1;space<=row-i;space++){
            cout<<" ";
        }
        for(star=1;star<=(i*2)-1;star++){
            cout<<"*";
        }
        
        cout<<"\n";
    }

}
