/*
check whether the given number is power of two or not */
#include<iostream>
using namespace std;
int main(){
int num,rem;
cout<<"enter the given number\n";
cin>>num;
while(num!=1){
    rem=num%2;
    num=num/2;
    if(rem==1)
    {
        cout<<"no";
        return 0;
    }
    

}
cout<<"yes";
}