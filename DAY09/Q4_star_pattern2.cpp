/*
print the pattern when no. of rows=4

* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *

*/

#include<iostream>
using namespace std;
int main(){
    int i,j,row,star,space;
    cout<<"enter no of rows\n";
    cin>>row;
    for(i=row;i>=1;i--){
        for(star=1;star<=i;star++){
            cout<<"* ";
        }
        for(space=1;space<=(row*2)-(2*i);space++){
            cout<<"  ";
        }
        for(star=1;star<=i;star++){
            cout<<"* ";
        }
        cout<<"\n";

    }
    for(i=1;i<=row;i++){
        for(star=1;star<=i;star++){
            cout<<"* ";
        }
        for(space=1;space<=(row*2)-(2*i);space++){
            cout<<"  ";
        }
        for(star=1;star<=i;star++){
            cout<<"* ";
        }
        cout<<"\n";
        
    }
}
