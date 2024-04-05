/*
print the pattern when no. of rows=4

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/

#include<iostream>
using namespace std;
int main(){
    int i,j,row,star,space;
    cout<<"enter no of rows\n";
    cin>>row;
    for(i=1;i<=row;i++){
        for(star=1;star<=i;star++){
            cout<<"* ";
        }
        for(space=1;space<=(2*row)-(i*2);space++){
            cout<<"  ";
        }
        for(star=1;star<=i;star++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(i=row-1;i>=1;i--){
        for(star=1;star<=i;star++){
            cout<<"* ";
        }
        for(space=1;space<=(2*row)-(i*2);space++){
            cout<<"  ";
        }
        for(star=1;star<=i;star++){
            cout<<"* ";
        }
        cout<<"\n";

    }
    
}
