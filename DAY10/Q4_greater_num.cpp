/*
Take three numbers a,b,c from the user, 
print yes if a is either greater than b or c. 
Otherwise print NO
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three numbers\n";
    cin>>a>>b>>c;
    if(a>b || a>c){
        cout<<"Yes";
    }
    else
    cout<<"No";
}