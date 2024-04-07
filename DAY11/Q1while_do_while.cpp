/*
Take a number n from the user and 
print all the even numbers between 1 and n(inclusive). 
Do this using while and do while loop separately.
*/
//Using while loop
#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    cout<<"enter the number\n";
    cin>>n;
     while(i<=n){
        if(i%2==0)
        cout<<i<<endl;
        i++;
     }
   }

//Using do_while loop
#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    cout<<"enter the number\n";
    cin>>n;
     do{
        if(i%2==0){
            cout<<i<<endl;
        }
        i++;
     }while(i<=n);
   }