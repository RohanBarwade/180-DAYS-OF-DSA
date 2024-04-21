/*
rotate the array by one
*/
#include<iostream>
using namespace std;
int main(){
    int arr[100],size;
    cout<<"enter the size of array\n";
    cin>>size;
    cout<<"enter the elements of array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int temp=arr[size-1];
    for(int i=size;i>=0;i--){
        if(i!=0)
       arr[i]=arr[i-1];
       else
       arr[0]=temp;
    }
    cout<<"array after the 1 rotation\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

}