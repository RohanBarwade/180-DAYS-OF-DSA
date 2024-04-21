/*
Count number of elements between two given elements in array
*/
#include<iostream>
using namespace std;
int main(){
    int arr[100],size,num1,num2,count=0,i1,i2;
    cout<<"enter the size of array\n";
    cin>>size;
    cout<<"enter the elements\n";
    for(int i=0;i<size;i++){
      cin>>arr[i];
    }
    cout<<"enter the first number\n";
    cin>>num1;
    cout<<"enter the second number\n";
    cin>>num2;
    for(int i=0;i<size;i++){
      if(arr[i]==num1)
      i1=i;
      if(arr[i]==num2)
      i2=i;
    }
    cout<<"number of elements between "<<num1<<" & "<<num2<<" = "<<i2-i1-1;
    
    
    }