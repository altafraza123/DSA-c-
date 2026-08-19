#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,7,9,8};
    int n= sizeof(arr) / sizeof(arr[0]),i, largest=arr[0];

    for(i=0; i<n; i++){
        if(arr[i]> largest){
         largest=arr[i];
        }
    }
    cout<<largest;

}