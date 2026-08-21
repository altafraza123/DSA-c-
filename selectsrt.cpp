#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements";
    cin>>n;

    int arr[n],j;
    cout<<"enter the array elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    for(int i=0; i<n-1; i++){
        int start=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[start]){
                start=j;
            }
        }
        swap(arr[i],arr[start]);
    }
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

    return 0;}
    