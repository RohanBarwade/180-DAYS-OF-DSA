/*

Selection Sort Algorithm to
sort the array of char in ascending 
order.

*/
#include<iostream>
using namespace std;
int main(){
    char ch[100],size,index;
    cout<<"enter the size of array\n";
    cin>>size;
    cout<<"enter the characters\n";
    for(int i=0;i<size;i++){
    cin>>ch[i];
    }
    for(int i=0;i<size-1;i++){
        index=i;
        for(int j=i+1;j<size;j++){
            if(ch[index]>ch[j])
            index=j;
        }
        swap(ch[index],ch[i]);
    }
    cout<<"sorted array of charachters is\n";
    for(int i=0;i<size;i++){
    cout<<ch[i]<<endl;
    }

}
    



