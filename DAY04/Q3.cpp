/*Take a number in input (ex n) and print the corresponding month to it. 
Ex: for n=1, print january, n=2, print feburary like this you need to give output. 
It is given that n will be greater than 0 and less than 13.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the month no\n";
    cin>>n;
    if(n==1){
        cout<<"january";
    }
    else if (n==2)
    {
        cout<<"february";
    }
    else if (n==3)
    {
        cout<<"march";
    }
    else if (n==4)
    {
        cout<<"april";
    }
    else if (n==5)
    {
        cout<<"may";
    }
    else if (n==6)
    {
        cout<<"june";
    }
    else if (n==7)
    {
        cout<<"july";
    }
    else if (n==8)
    {
        cout<<"august";
    }
    else if (n==9)
    {
        cout<<"september";
    }
    else if (n==10)
    {
        cout<<"october";
    }
    else if (n==11)
    {
        cout<<"november";
    }
    else if (n==12)
    {
        cout<<"december";
    }

    
}
