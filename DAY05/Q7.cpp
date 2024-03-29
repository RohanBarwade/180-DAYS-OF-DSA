/*
print the 'n'th term of the fibonacci series */
#include<iostream>
using namespace std;
int main(){
    int term;
   int  first=0,second=1,i;
   cout<<"enter the term\n";
   cin>>term;
int last=0,prev=1,crnt;
if(term==1){
    cout<<first;
    return 0;
}
if(term==2){
    cout<<second;
    return 0;
}
else{
    for(i=1;i<=term-2;i++){

       crnt=last+prev;
       last=prev;
       prev=crnt;

     }
     cout<<term<<" term of fibonacci series is ="<<crnt;
}



   



   
    

}