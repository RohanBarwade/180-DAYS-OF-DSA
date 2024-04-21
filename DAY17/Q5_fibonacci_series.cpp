/*

find the nth term of the fibonacci series

*/
#include<iostream>
using namespace std;
int main(){
     int arr[100],term;
     arr[0]=0;
     arr[1]=1;
     cout<<"enter the term\n";
     cin>>term;
     for(int i=2;i<term;i++){
        arr[i]=arr[i-1]+arr[i-2];
     }
     cout<<term<<"th term of fibonacci series is "<<arr[term-1];

}

