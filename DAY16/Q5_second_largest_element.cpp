/*
Find the second largest element in an array
of unique elements of size n. Where n>3.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[100],size,m1,m2;
    cout<<"enter the size of array\n";
    cin>>size;
    cout<<"enter elements\n";
    for(int i=0;i<size;i++){
    cin>>arr[i];   
    }
    if(arr[0]>=arr[1]){
        m1=arr[0];
        m2=arr[1];
    }
    else
    {
        m1=arr[1];
        m2=arr[0];
    }
    for(int i=0;i<size;i++){
      if(arr[i]>=m2){
      m2=arr[i];
      if(arr[i]>=m1){
        m2=m1;
        m1=arr[i];
      }
      }  
    }
    cout<<"second largest element of array is "<<m2;

    

    
}