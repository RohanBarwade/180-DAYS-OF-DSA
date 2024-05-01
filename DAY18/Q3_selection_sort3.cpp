/*
Selection Sort Algorithm to sort the array of integers 
in increasing order by taking the highest number to last place. 
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
for(int i=size-1;i>=0;i--){
index=i;
for(int j=0;j<i;j++){
    if(arr[index]<arr[j])
    index=j;
}
swap(arr[index],arr[i]);

}
cout<<"sorted array is\n";
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}






}