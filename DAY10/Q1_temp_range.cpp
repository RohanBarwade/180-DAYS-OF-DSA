/*
Temperature Range: Write a program that checks if a given temperature is 
suitable for swimming. If the temperature is between 70 and 90 (Excluded) 
degrees Fahrenheit print yes, else NO. */
#include<iostream>
using namespace std;
int main(){
    float temp;
    cout<<"enter the temperature\n";
    cin>>temp;
    if(70<temp && temp<90){
        cout<<"Yes";
    }
    else
    cout<<"No";
}