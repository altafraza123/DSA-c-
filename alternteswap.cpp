#include<iostream>
using namespace std;
int main(){
    int n,arr[40],i,temp;
    cout<<"Enter the size of an array";
    cin>>n;

    cout<<"Enter the elements";
    for (i=0; i<n; i++){
        cin>>arr[i];

    }
    for(i=0; i<n-1; i=i+2){

        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }

    cout<<"After swapping elements are :";
    for(i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
 return 0;
}