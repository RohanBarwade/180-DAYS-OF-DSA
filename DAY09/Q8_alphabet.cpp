/*
print the pattern when no. of rows=5
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I


*/

#include<iostream>
using namespace std;
int main(){
    int i,row,space;
    char ch;
    cout<<"enter no of rows\n";
    cin>>row;
    for(i=1;i<=row;i++){
        for(space=1;space<=row-i;space++){
            cout<<"  ";
        }
        for(ch='A';ch<='A'+(i*2-2);ch++){
            cout<<ch<<" ";
        }
        cout<<"\n";
        

}
}