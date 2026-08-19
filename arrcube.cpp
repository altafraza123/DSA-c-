#include<iostream>
using namespace std;
int main(){
    int arr[50],n,i,cube;
    cout<<"Enter the size of array";
    cin>>n;

    cout<<"Enter the elements";
    for (i=0; i<n; i++){
        cin>>arr[i];

    }
    cout<<"cube of elements :" ;
    for(i=0;i<n; i++){
        cube=arr[i]*arr[i]*arr[i];
       cout<<cube<<" ";
    }
   


return 0;

}