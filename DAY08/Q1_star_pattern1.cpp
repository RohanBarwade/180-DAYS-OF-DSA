/*
print the pattern when n=5
    *
   **
  *** 
 ****         
***** 
    
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,row,space;
    cout<<"enter no. of rows\n";
    cin>>row;
    space=row-1;
    for(i=1;i<=row;i++)
    {
       for(j=1;j<=row;j++) {
        if(j<=space){
            cout<<" ";
        }
        else
        cout<<"*";
       }
       cout<<"\n";
       space--;
    }
    
}