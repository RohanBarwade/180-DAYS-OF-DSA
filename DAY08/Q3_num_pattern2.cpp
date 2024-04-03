/*
print the pattern when n=5
    1
   12
  123 
 1234         
12345 
    
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
       cout<<num;
       cout<<"\n";

    }
    
    
}