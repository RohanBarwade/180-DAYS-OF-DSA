/*
print the pattern when no. of rows=5
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9


*/

#include<iostream>
using namespace std;
int main(){
    int i,row,space,num;
    cout<<"enter no of rows\n";
    cin>>row;
    for(i=1;i<=row;i++){
        for(space=1;space<=row-i;space++){
            cout<<"  ";
        }
        for(num=1;num<=i*2-1;num++){
            cout<<num<<" ";
        }
        cout<<"\n";
        

}
}