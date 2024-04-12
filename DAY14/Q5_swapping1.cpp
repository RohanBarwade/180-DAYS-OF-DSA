/*
There are three numbers a,b,c. Put the value of a into b,
 put value of b into c and put value of c into a. 
 Do it using Function.*/
 #include<iostream>
 using namespace std;
 void swap(int &x,int &y,int &z){
int s;
s=z;
z=y;
y=x;
x=s;

}
 int main(){
    int a,b,c;
    cout<<"enter three numbers\n";
    cin>>a>>b>>c;
    cout<<"before swap \n"<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
    swap(a,b,c);
    cout<<"after swap \n"<<"a = "<<a<<" b = "<<b<<" c = "<<c;
 
 }