/*
Find the index of a specific element in an array, 
if the element is nor present, print -1. 
Ask the size of the array from the user and then implement it
*/
#include<iostream>
using namespace std;
int main(){
int size,num,index;
int arr[100];
cout<<"enter the size of array\n";
cin>>size;
cout<<"enter elements\n";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
cout<<"enter the searching element\n";
cin>>num;

for(int i=0;i<size;i++){
    if(num==arr[i])
    index=i;
}
cout<<"index of "<<num<<" is "<<index;




}