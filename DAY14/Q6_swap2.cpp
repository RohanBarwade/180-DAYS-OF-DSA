/*
Swap 2 numbers a, b without using extra variables. Range of 
-10000<=a,b<=100000. 
*/
#include<iostream>
 using namespace std;
 void swap(int &x,int &y){
    x=x+y;
    y=x-y;
    x=x-y;
 

}
 int main(){
    int a,b;
    cout<<"enter two numbers\n";
    cin>>a>>b;
    cout<<"before swap \n"<<"a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"after swap \n"<<"a = "<<a<<" b = "<<b;
 
 }