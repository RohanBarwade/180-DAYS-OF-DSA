/*
Take 20 elements from user input and find its sum with the help of an array*/
#include<iostream>
using namespace std;
int main(){
int arr[20],sum=0;
cout<<"enter 20 elements\n";
for(int i=0;i<20;i++){
    cin>>arr[i];
}
for(int i=0;i<20;i++){
    sum=sum+arr[i];
}
cout<<"The sum of elements in array is "<<sum;

}