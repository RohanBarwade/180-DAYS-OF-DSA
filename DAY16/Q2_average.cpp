/*
Calculate the average of elements in an array of size 18 */
#include<iostream>
using namespace std;
int main(){
int arr[18];
float sum=0;
cout<<"enter 18 elements\n";
for(int i=0;i<18;i++){
    cin>>arr[i];
}
for(int i=0;i<18;i++){
    sum=sum+arr[i];
}
cout<<"The average of elements "<<float(sum/18);


}