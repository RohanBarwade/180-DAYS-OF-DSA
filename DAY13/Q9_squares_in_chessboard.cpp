/*
print the number of squares in n*n chessboard
*/
#include<iostream>
using namespace std;
int main(){
    int n,sqrs=0;
    cout<<"enter the size of chessboard\n";
    cin>>n;
    for(int i=1;i<=n;i++){
       sqrs=sqrs+(i*i); 
    }
    cout<<"no of squars are = "<<sqrs;
}