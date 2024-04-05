/*
print the pattern when no. of rows=4

   *
  * *
 * * *
* * * *
* * * *
 * * *
  * *
   *

*/

#include<iostream>
using namespace std;
int main(){
    int i,row,star,space;
    cout<<"enter no of rows\n";
    cin>>row;
    for(i=1;i<=row;i++){
    for(space=1;space<=row-i;space++){
        cout<<" ";
    }
    for(star=1;star<=i;star++){
        cout<<"* ";
    }
    cout<<"\n";

    }
    for(i=row;i>=1;i--){
        for(space=1;space<=row-i;space++){
        cout<<" ";
    }
    for(star=1;star<=i;star++){
        cout<<"* ";
    }
    cout<<"\n";

        
    }
    
    
}
