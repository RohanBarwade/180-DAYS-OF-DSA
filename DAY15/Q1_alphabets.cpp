/*
convert curresponding small alphabets into capital alphabets */
#include<iostream>
using namespace std;
char convert(char ch){
    char ans;
    ans=ch-'a'+'A';
    return ans;
}
int main(){
    char ch;
    cout<<"enter the small case alphabet\n";
    cin>>ch;
    cout<<convert(ch);
    int sum=ch-'a';
    cout<<char('A'+sum);  
}