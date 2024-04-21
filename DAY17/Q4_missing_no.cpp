/*
find the missing element in an array
eg.
if the input   is n
then array must contain n-1 elements from 1 to n-1*/
#include<iostream> 
using namespace std;
int main(){
    int n,arr[100];
    cout<<"enter n\n";
    cin>>n;
    cout<<"enter elements\n";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    
    cout<<"missing element is = "<<(n*(n+1)/2)-sum;

}