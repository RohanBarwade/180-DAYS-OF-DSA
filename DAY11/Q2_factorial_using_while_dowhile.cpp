/*
Find the factorial of a number n using a while loop and do a while loop
*/
//Using while loop
#include<iostream>
using namespace std;
int main(){
    int n,i=1,fact=1;
    cout<<"enter the number\n";
    cin>>n;
     while(i<=n){
        fact=fact*i;
        i++;
     }
     cout<<n<<"!"<<" = "<<fact;
   }

   //Using do_while loop
#include<iostream>
using namespace std;
int main(){
    int n,i=1,fact=1;
    cout<<"enter the number\n";
    cin>>n;
     do{
        fact=fact*i;
        i++;
     }while(i<=n);
     cout<<n<<"!"<<" = "<<fact;
   }