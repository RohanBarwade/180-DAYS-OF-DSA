/*M items are to be delivered in a circle of size N. 
Find the position where the M-th item will be delivered 
if we start from a given position K.
Note that items are distributed at adjacent positions starting from K.*/
#include<iostream>
using namespace std;
int main(){
    int N,M,s_position,total;
    cout<<"enter the size of circle\n";
    cin>>N;
    cout<<"enter the no. of items\n";
    cin>>M;
    cout<<"enter starting position\n";
    cin>>s_position;
    total=M+s_position-1;
    while(total>N){
        total=total-N;
    }
    cout<<"M-th item will be delivered to "<<total<<"th"<<" position";


}