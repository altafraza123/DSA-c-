#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements";
    cin>>n;

    int arr[n];
    cout<<"enter the array elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    for(int i=1; i<n; i++){
        int prev=i-1;
        int current=arr[i];

        while(prev>=0 && arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}