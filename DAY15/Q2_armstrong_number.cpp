/*
check whether the given number is armstrong number or not*/
#include<iostream>
#include<math.h>
using namespace std;

int arm(int num,int digit){
int n=num,rem,ans=0;

while(n){
rem=n%10;
n/=10;
ans=ans+pow(rem,digit);
}

if(num==ans)
return 1;
else
return 0;
}


int count(int n){
    int c=0;
    if(n==0)
    return 1;
    while(n){
        n/=10;
        c++;
    }
    return c;
}


int main(){
    int num;
    cout<<"enter the number\n";
    cin>>num;
    int digit=count(num);
    
    if(arm(num,digit)==1){
        cout<<"armstrong number";
    }
    else{
        cout<<"not armstrong";
    }

}