/*
reverse the elements of array*/
#include<iostream>
using namespace std;
int main(){
    int arr[100],size;
    cout<<"enter the size of array\n";
    cin>>size;
    cout<<"enter elements\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
     }
     cout<<"elements of array are\n";
     for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
     }
    int copy[100],j=0;
    for(int i=size-1;i>=0;i--){
        
        copy[j]=arr[i];
        j++;


     }
     for(int i=0;i<size;i++){
        arr[i]=copy[i];
     }
     cout<<"elements after reversing the array\n";
     for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
     }



}