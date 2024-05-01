/*
Selection Sort Algorithm to sort the 
array of integers in decreasing order
*/
#include<iostream>
using namespace std;
int main(){
int arr[100],size,index;
cout<<"enter the size of array\n";
cin>>size;
cout<<"enter the elements\n";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size-1;i++){
    index=i;
    for(int j=i+1;j<size;j++){
        if(arr[index]<arr[j])
        index=j;
    }
    swap(arr[i],arr[index]);
}
cout<<"sorted array is\n";
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}





}