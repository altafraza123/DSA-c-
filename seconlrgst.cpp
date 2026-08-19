#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int n,i;
     
    cout<<"enter the size of an array :";
    cin>>n;

    cout<<"enter the array elements: ";
    for (int i=0; i<n; i++)
    cin>>arr[i];
    int first_largest=arr[0],second_largest=arr[0];

    for(int i=1; i<n; i++){
        if (arr[i]>first_largest){
        first_largest=arr[i];


    }}
    for(int i=0; i<n; i++){
        if(arr[i]>second_largest && arr[i]<first_largest){
            second_largest=arr[i];
        }
    }
    cout<<second_largest;
    

   return 0;}