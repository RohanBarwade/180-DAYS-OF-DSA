/*
print the pattern when n=5
    1
   22
  333 
 4444         
55555 
    
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,row,num,space;
    cout<<"enter no. of rows\n";
    cin>>row;
    
    for(i=1;i<=row;i++)
    {
       for(space=1;space<=row-i;space++)
       cout<<" ";
       for(num=1;num<=i;num++)
       cout<<i;
       cout<<"\n";

    }
    
    
}