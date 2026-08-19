#include<iostream>
using namespace std;
int main(){
    int arr[33], n, i,k;
    cout<<"Enter the size of array";
    cin>>n;

    cout<<"enter the elements";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter k";
    cin>>k;


    for(i=0; i<k; i++){
       int last=arr[n-1];
       for (int j=n-1; j>0; j--){
        arr[j]=arr[j-1];
       }
       arr[0]=last;
    }
    cout<<"rotated array";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}