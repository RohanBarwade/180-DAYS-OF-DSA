/* print the factorial of a number */
#include<iostream>
using namespace std;
int main(){
    int i,num;
    double fact=1;
    cout<<"enter your number\n";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<num<<"!"<<" = "<<fact;
}