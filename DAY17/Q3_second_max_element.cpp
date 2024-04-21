/*
find the second largest element in an array */
#include<iostream>
using namespace std;
int main(){
    int arr[100],size,largest=INT16_MIN,second=INT16_MIN;
    cout<<"enter the size of array\n";
    cin>>size;
    cout<<"enter the elements of array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(largest<arr[i])
        largest=arr[i];
    }
   
for(int i=0;i<size;i++){
        if(arr[i]!=largest){
            if(arr[i]>second)
            second=arr[i];

        }
    }
    cout<<"second largest element is "<<second;

}