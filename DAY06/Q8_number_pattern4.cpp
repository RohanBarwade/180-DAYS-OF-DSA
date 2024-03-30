/*
print the pattern when the no. of rows & columns 
are given eg.rows=4,columns=5

1  2  3  4  5 
6  7  8  9  10 
11 12 13 14 15 
16 17 18 19 20

*/
#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    int num=0;
    cout<<"enter the value of rows & columns\n";
    cin>>r>>c;
    for(i=1;i<=r;i++){
         
        for(j=1;j<=c;j++){
            num=++num;
            cout<<num<<" ";
        }
        cout<<"\n";
    }
}