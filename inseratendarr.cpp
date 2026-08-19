#include<iostream>
using namespace std;
int main(){
    int arr[10]={3,4,5,6,7},n=5,value=2;

   arr[n]=value;
   n++;

   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    
   }
   return 0;}