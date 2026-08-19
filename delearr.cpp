#include<iostream>
using namespace std;
int main(){
    int arr[10]={3,4,5,6,7},n=5 ;
    

    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];}

   
   n--;
    
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    
   }
   return 0;}