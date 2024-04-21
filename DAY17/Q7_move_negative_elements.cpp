/*
Move all negative elements to end
*/
#include<iostream>
using namespace std;
int main(){
    int arr[100],size;
    cout<<"enter the size of array\n";
    cin>>size;
    cout<<"enter the elements\n";
    for(int i=0;i<size;i++){
      cin>>arr[i];
    }
    int arr2[100],m=0;
    for(int i=0;i<size;i++){
      if(arr[i]>0)
      {arr2[m]=arr[i];
      m++;}
    }
    for(int i=0;i<size;i++){
      if(arr[i]<0)
      {arr2[m]=arr[i];
      m++;}
    }
    cout<<"final array\n";
    for(int i=0;i<size;i++){
      cout<<arr2[i]<<endl;
    }
    
    
}