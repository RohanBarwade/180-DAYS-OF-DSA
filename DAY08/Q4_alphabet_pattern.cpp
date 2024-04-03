/*
print the pattern when n=5
    A
   AB
  ABC 
 ABCD         
ABCDE 
    
*/
#include<iostream>
using namespace std;
int main(){
    int i,row,space;
    char ch;
    cout<<"enter no. of rows\n";
    cin>>row;
    
    for(i=1;i<=row;i++)
    {
       for(space=1;space<=row-i;space++)
       cout<<" ";
       for(ch='A';ch<='A'+i-1;ch++)
       cout<<ch;
       cout<<"\n";

    }
    
    
}