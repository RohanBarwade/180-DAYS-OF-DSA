/*
reverse the elements of array method 2 */
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
     int i=0,j=size-1;
     while(i<j){
        swap(arr[i],arr[j]);
        i++,j--;
     }
cout<<"elements of array after reversing are\n";
     for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
     } 




}