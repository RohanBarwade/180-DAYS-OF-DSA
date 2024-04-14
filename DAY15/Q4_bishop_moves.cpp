/*
find the total bishop moves */
#include<iostream>
using namespace std;
int main(){
    int row,col,count=0,i,j;
    cout<<"enter row & col\n";
    cin>>row>>col;

    count=count+min(8-row,8-col);
    count=count+max(row-1,col-8);
    count=count+min(row-1,col-1);
    count=count+max(row-8,col-1);

    cout<<"total number of moves bishop ca take = "<<count;

    
}