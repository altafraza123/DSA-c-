#include<iostream>
using namespace std;
int main(){

    int arr[50];
    int n, key, i;
    cout<<"enter the size of array :";
    cin>>n;

    cout<<"enter the elements";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"enter the target to search";
    cin>>key;
    
    for(i=0; i<n; i++){
    if(arr[i]==key){
        cout<<"element is found at index :"<<i;
        return 0;
    }}
    
    cout<<"not found";
    
    return 0;
}