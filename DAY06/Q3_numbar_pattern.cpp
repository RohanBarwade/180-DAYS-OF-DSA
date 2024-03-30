/*
print the pattern when the no. of rows & columns 
are given eg.rows=6,columns=5
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/
#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"enter the value of rows & columns\n";
    cin>>r>>c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}