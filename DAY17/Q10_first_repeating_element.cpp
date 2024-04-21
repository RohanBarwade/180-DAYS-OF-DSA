/*
First Repeating Element 
*/
#include<iostream>
using namespace std;
int main(){
    int arr[100],size,num,set=0;
    cout<<"enter the size of array\n";
    cin>>size;
    cout<<"enter the elements\n";
    for(int i=0;i<size;i++){
      cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        num=arr[i];
        for(int j=i+1;j<size;j++){
            if(arr[j]==num)
            {set=1;
            break;
            }
        }
        if(set==1){
            break;
        }

        
    }
    cout<<num<<" is the first element that repeats";
}
