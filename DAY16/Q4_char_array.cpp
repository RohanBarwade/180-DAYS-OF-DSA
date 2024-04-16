/*Create an array of char types and store ‘a’ to ‘z’ in it. 
Then print the element of the arrays.*/
#include<iostream>
using namespace std;
int main(){
char arr[26];

cout<<"enter the alphabets\n";
for(int i=0;i<26;i++){
    cin>>arr[i];
}
cout<<"elements of array are\n";
for(int i=0;i<26;i++){
   cout<<arr[i]<<"endl";
}



}