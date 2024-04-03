/*
print the pattern when n=5
    1
   21
  321 
 4321         
54321 
    
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
       for(num=i;num>=1;num--)
       cout<<num;
       cout<<"\n";

    }
    
    
}