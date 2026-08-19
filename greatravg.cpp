#include<iostream>
using namespace std;
int main(){
    int arr[50],n,i,avg,sum=0;

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements";
    for(i=0; i<n; i++ ){
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        sum=(sum+ arr[i]);

    }
    avg=sum/n;
    cout<<"average="<<avg<<endl;

cout<<"Elements greater than average: ";
    for(i=0; i<n; i++){
     if(arr[i]>avg){
        cout<<arr[i]<<" ";

    }}
return 0;
    
}