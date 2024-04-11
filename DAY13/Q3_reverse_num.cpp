/*
reverse the given number*/
#include<iostream>
using namespace std;
int  main(){
    int num,rem;
    double rev=0;
    cout<<"enter the num\n";
    cin>>num;
    while(num!=0){
        rem=num%10;
        num=num/10;
        if(rev>INT16_MAX || rev<INT16_MIN)
        // return 0;
        rev=rev*10+rem;

    }
    cout<<"reverse of given number is = "<<rev;
}