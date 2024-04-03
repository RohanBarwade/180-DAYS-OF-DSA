/*
print the pattern when n=5
    A
   BB
  CCC 
 DDDD         
EEEEE 
    
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,row,space;
    char ch;
    cout<<"enter no. of rows\n";
    cin>>row;
    
    for(i=1;i<=row;i++)
    {
       for(space=1;space<=row-i;space++)
       cout<<" ";
       for(j=1;j<=i;j++)
       {ch='A'+i-1;
        cout<<ch;}
       cout<<"\n";

    }
    
    
}