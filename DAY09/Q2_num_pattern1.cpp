/*
print the pattern when no. of rows=5
    1
   121
  12321
 1234321
123454321
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,row,space,num,rev;
    cout<<"enter no of rows\n";
    cin>>row;
    for(i=1;i<=row;i++){
        for(space=1;space<=row-i;space++){
            cout<<" ";
        }
        for(num=1;num<=i;num++){
            cout<<num;
        }
        for(rev=i-1;rev>=1;rev--){
            cout<<rev;
        }
        cout<<"\n";
    }

}
