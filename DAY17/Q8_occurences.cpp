/*
find the number of occurences of given number in an array
*/
#include<iostream>
using namespace std;
int main(){
    int arr[100],size,num,count=0;
    cout<<"enter the size of array\n";
    cin>>size;
    cout<<"enter the elements\n";
    for(int i=0;i<size;i++){
      cin>>arr[i];
    }
    cout<<"enter the number\n";
    cin>>num;
    for(int i=0;i<size;i++){
      if(arr[i]==num)
      count++;
    }
    cout<<"the number of occurences of "<<num<<" = "<<count;



    
    
}
