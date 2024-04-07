/*
Print all the Capital and small letters  
using a while loop. It means A-Z, then a-z.
*/
#include<iostream>
using namespace std;
int main(){
    char ch1='A',ch2='a';
    while(ch1<='Z'){
        cout<<ch1<<endl;
        ch1++;
    }
    while(ch2<='z'){
        cout<<ch2<<endl;
        ch2++;
    }

}