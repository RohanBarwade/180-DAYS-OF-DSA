/*sort the array in ascending order by selection sort method */
#include<iostream>
using namespace std;
int main(){
    int arr[100],index,n;
cout<<"enter size of array\n";
cin>>n;
cout<<"enter elements\n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n-1;i++){
index=i;
for(int j=i+1;j<n;j++){
    if(arr[j]<arr[index])
    index=j;
}
swap(arr[index],arr[i]);

}
cout<<"the sorted array is \n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}


}